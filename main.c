
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

// #include "utils.h"
// #include "sort.h"
//#include "menu.h"

int main(void)
{
    // Creando listas
    LinkedList canciones;

    // Inicializando listas
    linkedListInit(&canciones);

    int *a = malloc(sizeof(int));
    a[0] = 100;

    linkedListInsert(&canciones,linkedListNodeCreate((void*)a),0);

    LinkedListNode *foo = linkedListGet(&canciones,0);

    a = (int*)foo->pointer;
    printf("%d\n", a[0]);

    linkedListFree(&canciones);

    return 0;
}
