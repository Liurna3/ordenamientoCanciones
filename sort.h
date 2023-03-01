/**
 * AUTORES:                                                    FECHA: 26-02-2023
 * -  Jorge Omar Torres Sosa - 1270900
 * DESCRIPCIÓN:
 * M2.1 Ejercicio de ordenamiento básico. Escribe un programa que capture los
 * gastos de una persona y que calcule cuánto ha gastado en total.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void bubbleSort(LinkedList *lista);
//void insertionSort(LinkedList *lista);
//void selectionSort(LinkedList *lista);

void bubbleSort(LinkedList *lista)
{
  // tamaño de la lista 
  int lista_len = len(lista);

  for (int i = 0; i < lista_len; i++)
  {
    for (int j = 0; j < lista_len - i - 1; j++)
    {
      char *a = concept(get(lista, j));
      char *b = concept(get(lista, j + 1));

      if (0 < strcmp(a, b))
      {
        LinkedListNode *temp1 = get(lista, j);
        delete(lista, j);
        insert(lista, temp1, j + 1);
      }
    }
  }
}