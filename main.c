
/**
 * AUTORES:                                                   FECHA: 03-03-2023
 * 1274895 - Luis Eduardo Galindo Amaya
 * 1270900 - Jorge Omar Torres Sosa
 * 1271949 - Mariano Perez Piña
 *
 * DESCRIPCIÓN: M2.1 Ejercicio de ordenamiento mas eficiente.
 * Escribe un programa que simule un playlist de canciones.
 */

#include "linkedList.h"
#include "linkedListNode.h"

#include "utils.h"
#include "sort.h"

#include "menu.h"

int main(void)
{
    // char concepto[STRING_LENGHT] = {0};
    // float monto = 0;
    // int op = 1;
    // int tipo = 0;

    // Creando listas
    LinkedList canciones;

    // Inicializando listas
    linkedListInit(&canciones);
    append(&canciones, "El problema", "Un verano sin ti", "Bad Bunny");
    append(&canciones, "Trastorno bipoalar", "Trastorno bipolar", "Porta");
    append(&canciones, "Apagado o Fuera de Cobertura", "Energia", "El Chojin");
    append(&canciones, "Un dia en Suburbia", "Un dia en Suburbia", "Nach");
    append(&canciones, "Meteorito", "Antonimo", "Rayden");
    append(&canciones, "Jeremias 17:5", "Muerte", "Canserbero");

    mergeSort(&canciones);
    printLista(&canciones);

    // do
    // {
    //     menu();

    //     scanf(" %d", &op);

    //     // vaciar stdin antes de capturar el concepto
    //     int c;
    //     while ((c = getchar()) != '\n' && c != EOF);

    //     switch (op)
    //     {
    //     case 1:
    //         printf("INGRESA EL TITULO DE LA CANCION: ");
    //         fgets(concepto, STRING_LENGHT, stdin);

    //         char *p;
    //         if ((p = strchr(concepto, '\n')) != NULL)
    //             *p = '\0';

    //         printf("INGRESA EL NOMBRE DEL ARTISTA: ");//A ESTE LE FALTA MODIFICACION
    //         scanf(" %f", &monto);

    //         printf(
    //             "Ingresar el tipo de gasto\n"
    //             "[1] Comida\n"
    //             "[2] Entretenimiento\n"
    //             "[3] Pago fijo\n"
    //             "-->");

    //         scanf(" %d", &tipo);

    //         switch (tipo - 1) // para capturar el valor correcto
    //         {
    //         case CATEGORY_FOOD:
    //             append(&comida,
    //             break;

    //         case CATEGORY_ENTERTAMENT:
    //             append(
    //                 &entretenimiento,
    //                 CATEGORY_ENTERTAMENT,
    //                 concepto,
    //                 monto);
    //             break;

    //         case CATEGORY_FIXED_PAYMENT:
    //             append(
    //                 &,
    //                 CATEGORY_FIXED_PAYMENT,
    //                 concepto,
    //                 monto);
    //             break;

    //         default:
    //             printf("Tipo de gasto invalido!, Cancelado.\n");
    //             break;
    //         }

    //         break;

    //     case 2:
    //         insertionSort(&comida);
    //         printLista(&comida);
    //         break;

    //     case 3:
    //         selectionSort(&entretenimiento);
    //         printLista(&entretenimiento);
    //         break;

    //     case 4:

    //         mergeSort(&);
    //         printLista(&);
    //         break;

    //     case 0:
    //         printf("saliendo...\n");
    //         break;

    //     default:
    //         printf("opcion desconocida...\n");
    //         break;
    //     }

    // } while (op);

    // liberar memoria
    linkedListFree(&canciones);

    return 0;
}
