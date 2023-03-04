

/**
 * Longitud de la lista
 * @param direccion a la lista
 * @return numero de nodos
 */
int len(LinkedList *list) { return linkedListLenght(list); }

/**
 * Crear una nueva entrada para la lista, paras mas informacion consultar
 * linkedListNode.h
 * @param list direccion a la lista
 * @param category CATEGORY_FOOD, CATEGORY_ENTERTAMENT, CATEGORY_FIXED_PAYMENT
 * @param cost valor en dinero
 */
void append(LinkedList *list, char *title, char *album, char *artist)
{
  linkedListInsertLast(list, linkedListNodeCreate(title, album, artist));
}

/**
 * Insertar un nodo en una posicion de la lista
 * @param list direccion a la lista
 * @param node direccion al nodo
 * @param posicion en la lista
 */
void insert(LinkedList *list, LinkedListNode *node, int position)
{
  linkedListInsert(list, node, position);
}

/**
 * Eliminar un nodo de la lista
 * @param list direccion a la lista
 * @param posicion en la lista
 */
void delete(LinkedList *list, int position)
{
  linkedListRemove(list, position);
}

/**
 * Obtener el valor de un nodo de la lista
 * @param direccion a la lista
 * @param posicion del elemento
 * @return puntero al nodo
 */
LinkedListNode *get(LinkedList *list, int position)
{
  return linkedListNodeCopy(linkedListGet(list, position));
}

/**
 * Obtener el Concepto del nodo
 * @param direccion al nodo
 * @return consepto
 */
char *title(LinkedListNode *node)
{
  return node->title;
}

/**
 * Obtener el Album del nodo
 * @param direccion al nodo
 * @return album
 */
char *album(LinkedListNode *node)
{
  return node->album;
}

/**
 * Obtener el Artista del nodo
 * @param direccion al nodo
 * @return artista
 */
char *artist(LinkedListNode *node)
{
  return node->artist;
}

/**
 * Mostrar todos los valores del nodo
 * @param direccion al nodo
 */
void display(LinkedListNode *node)
{
  linkedListNodeDisplay(node);
}

/**
 * Ordenar la lista
 * @param direccion a la lista
 */
void printLista(LinkedList *lista)
{
  printf("%-33s %-33s %-33s \n", "Titulo", "Album", "Artista");
  for (int i = 0; i < len(lista); i++)
  {
    display(get(lista, i));
    printf("\n");
  }
}