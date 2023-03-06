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
 * Ordenamiento shell por artista, en progreso...
 * @author Luis Eduardo Galindo Amaya
 */
void shellSort(LinkedList *list)
{
  if (linkedListEmpty(list))
    return; // lista vacia

  if (len(list) == 1)
    return; // lista trivialmente ordenada

  int n = len(list);
  for (int interval = n / 2; interval > 0; interval /= 2)
  {
    for (int i = interval; i < n; i += 1)
    {
      LinkedListNode *temp = get(list, i);
      int j;
      for (j = i; j >= interval && strDiff(temp->artist, get(list, j - interval)->artist); j -= interval)
      {
        LinkedListNode *current = get(list, j - interval);
        delete (list, j);
        insert(list, current, j);
      }

      delete (list, j);
      insert(list, temp, j);
    }
  }
}
