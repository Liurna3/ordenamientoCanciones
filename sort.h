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
  for (int i = 0; i < len(lista); i++)
  {
    for (int j = 0; j < len(lista) - i - 1; j++)
    {
      if (strcmp(get(lista, j)->concept, get(lista, j + 1)->concept) > 0)
      {
        LinkedListNode *temp1 = get(lista, j);
        delete(lista, j);
        insert(lista, temp1, j + 1);
      }
    }
  }
}