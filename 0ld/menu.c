//Menu
//Quita o mueve librerias sin prob, solo puse por poner
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//Variables que uso
//ma, md y mpf solo son placeholder del gasto total
//op y op2 son opciones del usuario para elegir que hacer
int ma, md, mpf, op, op2;

//funciones que muestran opciones para hacerlo mas compacto el codigo
int display(void);
int display2(void);

//main
void main()
{
display();
do//Se cicla hasta que el usuario quiera salir
{
    scanf("%d",&op);
    switch(op)
    {
        case 1://Caso de capturar gasto
            display2();
            do//Otro ciclo hasta que el usuario quiera salir
            {
                scanf("%d",&op2);
                switch(op2)
                {
                    case 1:
                        printf("INGRESE EL GASTO EN ALIMENTOS");
                        scanf("%d",&ma);
                        break;
        
                    case 2:
                        printf("INGRESE EL GASTO EN DIVERSION");
                        scanf("%d",&md);
                        break;
        
                    case 3:
                        printf("INGRESE EL GASTO EN PAGOS FIJOS");
                        scanf("%d",&mpf);
                        break;
        
                    case 4:
                        printf("\nRegresando... \n");
                        break;

                    default:
                        printf("\nOPCION NO VALIDA\n");
                        display2();
                        break;
        
                }
            }while(op2!=4);
            display();
            break;

        case 2:
            printf("EL MONTO DE GASTO EN ALIMENTOS ES: %d",ma);
            break;

        case 3:
            printf("EL MONTO DE GASTO EN DIVERSION ES: %d",md);
            break;

        case 4:
            printf("EL MONTO DE GASTO EN PAGOS FIJOS ES: %d",mpf);
            break;

        case 5:
            printf("\nSaliendo...");
            break;

        default:
            printf("\nOPCION INCORRECTA, INTENTA DE NUEVO\n");
            display();
            break;
    }
}while(op != 5);
}



int display(void){
    printf("\nCAPTURADOR DE GASTOS\n");
    printf(" [1] CAPTURAR GASTO\n");
    printf(" [2] MOSTRAR GASTO EN ALIMENTOS\n");
    printf(" [3] MOSTRAR GASTO EN DIVERSION\n");
    printf(" [4] MOSTRAR GASTO EN PAGOS FIJOS\n");
    printf(" [5] SALIR\n");
    printf(" --> ");   
}

int display2(void){
    printf("\n ELIGA EL GASTO A CAPTURAR\n [1] ALIMENTOS\n [2] DIVERSION\n [3] PAGOS FIJOS\n [4] REGRESAR AL MENU PRINCIPAL\n");
    printf(" --> ");
}