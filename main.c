
/**
 * AUTORES:                                                    FECHA: 26-02-2023
 * - Luis Eduardo Galindo Amaya -
 * - Jorge Omar Torres Sosa - 1270900
 * - Mariano Perez Piña -
 *
 * DESCRIPCIÓN:
 * M2.1 Ejercicio de ordenamiento básico. Escribe un programa que capture los
 * gastos de una persona y que calcule cuánto ha gastado en total.
 */

#include "linkedList.h"
#include "linkedListNode.h"

#include "utils.h"
#include "sort.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
  LinkedList pagosFijos;
  LinkedList entretenimiento;
  LinkedList comida;
  
  linkedListInit(&pagosFijos);
  linkedListInit(&entretenimiento);
  linkedListInit(&comida);

  /* agregar elementos */
  append(&entretenimiento, CATEGORY_ENTERTAMENT, "Boleto para Morbius", 100.50);
  append(&comida, CATEGORY_FOOD, "Palomitas", 20.0);
  append(&pagosFijos, CATEGORY_FIXED_PAYMENT, "Pago de renta", 1000.0);
  append(&pagosFijos, CATEGORY_FIXED_PAYMENT, "Pago de agua", 1000.0);
  append(&pagosFijos, CATEGORY_FIXED_PAYMENT, "Abarrotes", 1000.0);
  append(&pagosFijos, CATEGORY_FIXED_PAYMENT, "Pago de luz", 1000.0);

  bubbleSort(&pagosFijos);
  printLista(&pagosFijos);
  /* mostrar los elementos */
  // printf("--- Elementos 1 ---\n");
  // for (int i = 0; i < len(&lista); i++) {
  //   display(get(&lista, i));
  //   printf("\n");
  // }

  // printf("\n");

  // /* copiar un elemento y ponerlo al final */
  // LinkedListNode *boleto = get(&lista, 0);

  // /* eliminar el boleto para morius de la lista */
  // delete (&lista, 0);

  // printf("--- Elementos 2 ---\n");
  // for (int i = 0; i < len(&lista); i++) {
  //   display(get(&lista, i));
  //   printf("\n");
  // }

  // printf("\n");

  // /* agregar un retiro */
  // append(&lista, CATEGORY_FIXED_PAYMENT, "Retiro", 10000);

  // printf("--- Elementos 3 ---\n");
  // for (int i = 0; i < len(&lista); i++) {
  //   display(get(&lista, i));
  //   printf("\n");
  // }
  // printf("\n");

  // /* insertar el boleto a la mitad */
  // insert(&lista, boleto, 1);
  // printf("--- Elementos 4 ---\n");
  // for (int i = 0; i < len(&lista); i++) {
  //   display(get(&lista, i));
  //   printf("\n");
  // }
  // printf("\n");

  // /* crear un nodo random e insertarlo */
  // LinkedListNode *bar =
  //     linkedListNodeCreate(CATEGORY_FIXED_PAYMENT, "Otro retiro", 100);
  // insert(&lista, bar, len(&lista)); /* insertar al final */

  // printf("--- Elementos 5 ---\n");
  // for (int i = 0; i < len(&lista); i++) {
  //   display(get(&lista, i));
  //   printf("\n");
  // }
  // printf("\n");

  /* liberar la memoria */
  linkedListFree(&pagosFijos);
  linkedListFree(&entretenimiento);
  linkedListFree(&comida);

  return 0;
}

// Funciones de la lista



// Funciones de ordenamiento



// for (int i = 0; i+1 < len(lista); i++)
//   {
//     if(strcmp(get(lista, i)->concept, get(lista, i+1)->concept) > 0)
//     {

//       printf("%s es menor que %s", get(lista, i+1)->concept, get(lista, i)->concept);
//     }
//     else
//     {
//       printf("%s es mayor que %s", get(lista, i+1)->concept, get(lista, i)->concept);
//     }
//     printf("\n");
//   }  