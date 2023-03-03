
/**
 * AUTORES:                                                   FECHA: 26-02-2023
 * 1274895 - Luis Eduardo Galindo Amaya
 * 1270900 - Jorge Omar Torres Sosa
 * 1271949 - Mariano Perez Piña
 *
 * DESCRIPCIÓN: M2.1 Ejercicio de ordenamiento básico.
 * Escribe un programa que capture los gastos de una persona y que calcule
 * cuánto ha gastado en total.
 */

#include "linkedList.h"
#include "linkedListNode.h"

#include "utils.h"
#include "sort.h"

#include "menu.h"

int main(void)
{
    char concepto[CONCEPT_LENGHT] = {0};
    float monto = 0;
    int op = 1;
    int tipo = 0;

    LinkedList pagosFijos;
    LinkedList entretenimiento;
    LinkedList comida;

    // Inicializando listas
    linkedListInit(&pagosFijos);
    linkedListInit(&entretenimiento);
    linkedListInit(&comida);


    do
    {
        menu();

        scanf(" %d", &op);

        // vaciar stdin antes de capturar el concepto
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        switch (op)
        {
        case 1:
            printf("INGRESA EL TITULO DE LA CANCION: ");
            fgets(concepto, CONCEPT_LENGHT, stdin);

            char *p;
            if ((p = strchr(concepto, '\n')) != NULL)
                *p = '\0';

            printf("INGRESA EL NOMBRE DEL ARTISTA: ");//A ESTE LE FALTA MODIFICACION
            scanf(" %f", &monto);

            printf(
                "Ingresar el tipo de gasto\n"
                "[1] Comida\n"
                "[2] Entretenimiento\n"
                "[3] Pago fijo\n"
                "-->");

            scanf(" %d", &tipo);

            switch (tipo - 1) // para capturar el valor correcto
            {
            case CATEGORY_FOOD:
                append(
                    &comida,
                    CATEGORY_FOOD,
                    concepto,
                    monto);
                break;

            case CATEGORY_ENTERTAMENT:
                append(
                    &entretenimiento,
                    CATEGORY_ENTERTAMENT,
                    concepto,
                    monto);
                break;

            case CATEGORY_FIXED_PAYMENT:
                append(
                    &pagosFijos,
                    CATEGORY_FIXED_PAYMENT,
                    concepto,
                    monto);
                break;

            default:
                printf("Tipo de gasto invalido!, Cancelado.\n");
                break;
            }

            break;

        case 2:
            insertionSort(&comida);
            printLista(&comida);
            break;

        case 3:
            selectionSort(&entretenimiento);
            printLista(&entretenimiento);
            break;

        case 4:

            mergeSort(&pagosFijos);
            printLista(&pagosFijos);
            break;

        case 0:
            printf("saliendo...\n");
            break;

        default:
            printf("opcion desconocida...\n");
            break;
        }

    } while (op);

    // liberar memoria
    linkedListFree(&pagosFijos);
    linkedListFree(&entretenimiento);
    linkedListFree(&comida);

    return 0;
}
