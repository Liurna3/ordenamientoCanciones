//Solo para imprimir el menu y que se vea un poco mas limpio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu (void){
    printf(
            "\nPLAYLIST DE CANCIONES\n"
            " [1] CAPTURAR CANCION\n"
            " [2] MOSTRAR PLAYLIST ORDENADA POR CANCION\n"
            " [3] MOSTRAR PLAYLIST ORDENADA POR ALBUM\n"
            " [4] MOSTRAR PLAYLIST ORDENADA POR ARTISTA\n"
            " [0] SALIR\n"
            " --> ");
}