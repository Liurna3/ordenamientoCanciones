// Solo para imprimir el menu y que se vea un poco mas limpio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu()
{
    int op;
    char nombre[STRING_LENGHT];
    char album[STRING_LENGHT];
    char artista[STRING_LENGHT];

    printf(
        "\n"
        "---[ PLAYLIST DE CANCIONES ]---\n"
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
        printf("---[ CAPTURAR CANCION ]----\n");
        printf("NOMBRE: ");
        stdinFlush();
        getString(nombre, STRING_LENGHT);
        printf("ARTISTA: ");
        getString(artista, STRING_LENGHT);
        printf("ALBUM: ");
        getString(album, STRING_LENGHT);
        printf("---------------------------\n");
        // aquí va para crear el nodo 
        break;
    
    case 2:
        // ordenada por cancion
        break;

    case 3:
        // por album
        break;

    case 4:
        // por artista
        break;

    default:
        printf("\nNo existe esa opcion!!\n");
        break;
    }
}