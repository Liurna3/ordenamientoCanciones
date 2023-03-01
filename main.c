
/**
 * AUTORES:                                                   FECHA: 26-02-2023
 * 1274895 - Luis Eduardo Galindo Amaya
 * 1270900 - Jorge Omar Torres Sosa
 * - Mariano Perez Piña
 *
 * DESCRIPCIÓN: M2.1 Ejercicio de ordenamiento básico.
 * Escribe un programa que capture los gastos de una persona y que calcule
 * cuánto ha gastado en total.
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

  linkedListFree(&pagosFijos);
  linkedListFree(&entretenimiento);
  linkedListFree(&comida);

  return 0;
}
