
/**
 * AUTORES:                                                   FECHA: 03-03-2023
 * 1274895 - Luis Eduardo Galindo Amaya
 * 1270900 - Jorge Omar Torres Sosa
 * 1271949 - Mariano Perez Piña
 *
 * DESCRIPCIÓN: M2.1 Ejercicio de ordenamiento mas eficiente.
 * Escribe un programa que simule un playlist de canciones.
 */

#include "lib/linkedList.h"
#include "lib/linkedListNode.h"

#include "utils.h"
#include "sort.h"

#include "menu.h"

int main(void)
{
    // Creando listas
    int op;
    char nombre[STRING_LENGHT];
    char album[STRING_LENGHT];
    char artista[STRING_LENGHT];
    LinkedList canciones;

    // Inicializando listas
    linkedListInit(&canciones);

    do
    {
        printf(
            "\n"
            "--- PLAYLIST DE CANCIONES ---\n"
            " [1] CAPTURAR CANCION\n"
            " [2] MOSTRAR PLAYLIST ORDENADA POR CANCION\n"
            " [3] MOSTRAR PLAYLIST ORDENADA POR ALBUM\n"
            " [4] MOSTRAR PLAYLIST ORDENADA POR ARTISTA\n"
            " [0] SALIR\n"
            "-------------------------------\n"
            "> ");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("--- CAPTURAR CANCION ----\n");
            printf("NOMBRE: ");
            stdinFlush();
            getString(nombre, STRING_LENGHT);
            printf("ARTISTA: ");
            getString(artista, STRING_LENGHT);
            printf("ALBUM: ");
            getString(album, STRING_LENGHT);
            printf("---------------------------\n");

            // aquí va para crear el nodo
            append(&canciones, nombre, album, artista);
            break;

        case 2:
            // ordenada por cancion
            mergeSort(&canciones);
            printLista(&canciones);
            break;

        case 3:
            quickSort(&canciones);
            printLista(&canciones);
            break;

        case 4:
            // por artista
            shellSort(&canciones);
            printLista(&canciones);
            break;

        case 0:
            printf("Adios!!\n");
            linkedListFree(&canciones);
            break;

        default:
            printf("\nNo existe esa opcion!!\n");
            break;
        }

    } while (op);

    /* append(&canciones, "El problema", "Un verano sin ti", "Bad Bunny");
    append(&canciones, "Trastorno bipoalar", "Trastorno bipolar", "Porta");
    append(&canciones, "Apagado o Fuera de Cobertura", "Energia", "El Chojin");
    append(&canciones, "Un dia en Suburbia", "Un dia en Suburbia", "Nach");
    append(&canciones, "Meteorito", "Antonimo", "Rayden");
    append(&canciones, "Jeremias 17:5", "Muerte", "Canserbero");

    return 0;
}
