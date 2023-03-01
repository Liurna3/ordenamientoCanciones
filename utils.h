

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
void append(LinkedList *list, short category, char *concept, float cost)
{
  linkedListInsertLast(list, linkedListNodeCreate(category, concept, cost));
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
 * Obtener la categoria de un nodo
 * @param direccion al nodo
 * @return categoria
 */
short category(LinkedListNode *node)
{
  return node->category;
}

/**
 * Obtener el Concepto del nodo
 * @param direccion al nodo
 * @return consepto
 */
char *concept(LinkedListNode *node)
{
  return node->concept;
}

/**
 * Obtener el Costo del nodo
 * @param direccion al nodo
 * @return costo
 */
float cost(LinkedListNode *node)
{
  return node->cost;
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
  for (int i = 0; i < len(lista); i++)
  {
    display(get(lista, i));
    printf("\n");
  }
}