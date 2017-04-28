#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define P 20

int main()
{
    EPersona mispersonas [P];
    EPersona auxPersona;

    char seguir='s';
    int opcion=0;
    int flagOpciones;


    estado_Inicial_Personas(mispersonas);


    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");
        printf("\nELIJA UNA OPCION: ");

        scanf("%d",&opcion);

        if (opcion<1 || opcion>5)
        {
            printf("\nOpcion invalida!!!!!!\n");
            printf("Reingrese opcion\n\n");
        }

        switch(opcion)
        {

        case 1:

            flagOpciones=0;
            cargar_Personas(mispersonas, P);
            flagOpciones=1;

            break;

        case 2:
            if (flagOpciones==1)
            {
                borrar_Personas(mispersonas, P);
            }
            else
            {
                printf("\nDebe cargar los datos de la opcion 1 previamente antes de proceder a borrar!!!!!\n\n");
            }

            break;
        case 3:
            if (flagOpciones==1)
            {
                ordenarPersonas(mispersonas, P);
            }
            else
            {
                printf("\nDebe cargar los datos de la opcion 1 previamente antes de proceder a ordenar!!!!!\n\n");
            }


            break;

        case 4:

            if (flagOpciones==1)
            {
                grafico_Edades_Personas(mispersonas, P);
            }
            else
            {
                printf("\nDebe cargar los datos de la opcion 1 previamente antes de proceder a mostrar el grafico!!!!!\n\n");
            }


            break;

        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}













