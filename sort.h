
/**
 * AUTOR: Jorge Omar Torres Sosa                               FECHA: 26-02-2023
 *
 * DESCRIPCIÓN:
 * En este archivo se encuentran los algoritmos para ordenar las listas.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mergeSort(LinkedList *lista)
{
  if (len(lista) > 1)
  {
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
      if (strcmp(get(left, i)->title, get(right, j)->title) < 0)
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
}

/**
 * Ordenamiento shell por artista, en progreso...
 * @author Luis Eduardo Galindo Amaya
 */
void shellSort(LinkedList *list)
{
  if (linkedListEmpty(list))
    return; // lista vacia

  if (linkedListLenght(list) == 1)
    return; // lista trivialmente ordenada

  int n = linkedListLenght(list);
  for (int interval = n/2; interval > 0; interval /= 2)
  {
    for (int  i = interval; i < n; i++)
    {
      LinkedListNode *temp = get(list,i);
      int j=i;
      LinkedListNode *current = get(list, j-interval);
      for (j = i; j>=interval && strcmp(temp->artist, current->artist) < 0; j-=interval)
      {
        delete(list,j) ;
        insert(list,current,j);
        current = get(list, j-interval);
      }
      
      delete(list,j) ;
      insert(list,temp,j);
    }
    
  }
  

}

// void insertionSort(LinkedList *lista)
// {
//   for (int i = 1; i < len(lista); i++)
//   {
//     LinkedListNode *key = get(lista, i);
//     int j = i - 1;
//     while (j >= 0 && strcmp(get(lista, j)->concept, key->concept) > 0)
//     {
//       // LinkedListNode *temp2 = get(lista, j);
//       j--;
//     }
//     delete(lista, i);
//     insert(lista, key, j + 1);
//   }
// }

// void selectionSort(LinkedList *lista)
// {
//   for (int i = 0; i < len(lista) - 1; i++)
//   {
//     int min = i;
//     for (int j = i + 1; j < len(lista); j++)
//     {
//       if (strcmp(get(lista, min)->concept, get(lista, j)->concept) < 0)
//       {
//         min = j;
//       }
//     }
//     LinkedListNode *temp3 = get(lista, min);
//     delete(lista, min);
//     insert(lista, temp3, i);
//   }
// }