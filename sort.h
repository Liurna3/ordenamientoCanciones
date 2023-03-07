/**
 * Ordenamiento merge por titulo
 * @author Jorge Omar Torres Sosa
 */
void mergeSort(LinkedList *lista)
{
  if (linkedListEmpty(lista))
    return; // lista vacia

  if (len(lista) == 1)
    return; // lista trivialmente ordenada

  LinkedList *left = malloc(sizeof(LinkedList));
  LinkedList *right = malloc(sizeof(LinkedList));
  linkedListInit(left);
  linkedListInit(right);
  int middle = len(lista) / 2;
  for (int i = 0; i < middle; i++)
  {
    LinkedListNode *temp = get(lista, i);
    insert(left, temp, i);
  }
  for (int i = middle; i < len(lista); i++)
  {
    LinkedListNode *temp = get(lista, i);
    insert(right, temp, i - middle);
  }
  mergeSort(left);
  mergeSort(right);
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < len(left) && j < len(right))
  {
    if (strDiff(get(left, i)->title, get(right, j)->title))
    {
      LinkedListNode *temp = get(left, i);
      delete (lista, k);
      insert(lista, temp, k);
      i++;
    }
    else
    {
      LinkedListNode *temp = get(right, j);
      delete (lista, k);
      insert(lista, temp, k);
      j++;
    }
    k++;
  }
  while (i < len(left))
  {
    LinkedListNode *temp = get(left, i);
    delete (lista, k);
    insert(lista, temp, k);
    i++;
    k++;
  }
  while (j < len(right))
  {
    LinkedListNode *temp = get(right, j);
    delete (lista, k);
    insert(lista, temp, k);
    j++;
    k++;
  }
}

/**
 * Ordenamiento shell por artista
 * @author Luis Eduardo Galindo Amaya
 */
void shellSort(LinkedList *list)
{
  if (linkedListEmpty(list))
    return; // lista vacia

  if (len(list) == 1)
    return; // lista trivialmente ordenada

  int n = len(list); // tamaño original de la lista
  for (int interval = n / 2; interval > 0; interval /= 2)
  {
    for (int i = interval; i < n; i += 1)
    {
      LinkedListNode *temp = get(list, i);
      int j = i;

      while (j >= interval)
      {
        LinkedListNode *current = get(list, j - interval);

        if (!strDiff(temp->artist, current->artist))
          // si la diferencia es mayor a '0' el nodo esta en la posicion correcta
          break;

        // cambio de valores
        delete (list, j);
        insert(list, current, j);

        j -= interval;
      }

      delete (list, j);
      insert(list, temp, j);
    }
  }
}

/**
 * Ordenamiento quick por album
 * @author Mariano Perez Piña
 */
void quickSort(LinkedList *list)
{
  if (linkedListEmpty(list))
    return; // lista vacia

  if (len(list) == 1)
    return; // lista trivialmente ordenada

  LinkedList *left = malloc(sizeof(LinkedList));
  LinkedList *right = malloc(sizeof(LinkedList));
  linkedListInit(left);
  linkedListInit(right);
  LinkedListNode *pivot = get(list, 0);
  for (int i = 1; i < len(list); i++)
  {
    LinkedListNode *temp = get(list, i);
    if (strDiff(pivot->album, temp->album))
      insert(left, temp, len(left));
    else
      insert(right, temp, len(right));
  }
  quickSort(left);
  quickSort(right);
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < len(left))
  {
    LinkedListNode *temp = get(left, i);
    delete (list, k);
    insert(list, temp, k);
    i++;
    k++;
  }
  delete (list, k);
  insert(list, pivot, k);
  k++;
  while (j < len(right))
  {
    LinkedListNode *temp = get(right, j);
    delete (list, k);
    insert(list, temp, k);
    j++;
    k++;
  }
}
