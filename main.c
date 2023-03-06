
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
    // menu();   
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

    printf("------------------\n");
    shellSort(&canciones);
    printLista(&canciones);

    linkedListFree(&canciones);

    return 0;
}
