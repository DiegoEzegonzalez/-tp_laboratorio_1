#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{

    float x;
    float y;
    float resultado;
    int flag1=0;
    int flag2=0;

    char seguir='s';
    int opcion=0;

    do
    {
        if (flag1==0 && flag2==0)
        {
            printf("\n->1- Ingresar 1er operando (A=X) \n");
            printf("->2- Ingresar 2do operando (B=Y) \n");
        }

        else
        {
            if (flag1==1 && flag2==0)
            {
                printf("\n->1- Ingresar 1er operando (A=%.2f) \n", x);
                printf("->2- Ingresar 2do operando (B=Y) \n");

            }
            if (flag1==1 && flag2==1)
            {
                printf("\n->1- Ingresar 1er operando (A=%.2f) \n", x);
                printf("->2- Ingresar 2do operando (B=%.2f)\n", y);
            }
            if (flag1==0 && flag2==1)
            {
                printf("\n->1- Ingresar 1er operando (A=X) \n");
                printf("->2- Ingresar 2do operando (B=%.2f)\n", y);
            }

        }


        printf("->3- Calcular la suma (A+B)\n");
        printf("->4- Calcular la resta (A-B)\n");
        printf("->5- Calcular la division (A/B)\n");
        printf("->6- Calcular la multiplicacion (A*B)\n");
        printf("->7- Calcular el factorial (A!)\n");
        printf("->8- Calcular todas las operacione\n");
        printf("->9- Salir\n");
        printf("\n-> ELIJA UNA OPCION:  ");


        scanf("%d",&opcion);

        if (opcion<1 || opcion>9)
        {
            printf("\nError, ingrese una opcion entre 1 y 9\n");


        }

        switch(opcion)
        {
        case 1:
            flag1=1;
            printf("\n-Ingrese el numero (A): ");
            scanf("%f", &x);

            break;

        case 2:
            flag2=1;
            printf("\n-Ingrese el numero (B): ");
            scanf("%f", &y);

            break;

        case 3://Suma
            system("clear");
            if (flag1==1 && flag2==1)
            {
                resultado=sumar(x,y);
                printf("\nLa suma entre %.2f + %.2f es: %.2f\n",x,y, resultado);
            }
            else
            {
                printf("\nError, debe ingresar dos datos validos \n");

            }
            break;

        case 4://Resta
            system("clear");
            if (flag1==1 && flag2==1)
            {

                resultado=restar(x,y);
                printf("\nLa resta entre %.2f - %.2f es: %.2f\n",x,y, resultado);
            }
            else
            {
                printf("\nError, debe ingresar dos datos validos \n");
            }

            break;

        case 5://Division
            system("clear");
            if (flag1==1 && flag2==1)
            {
                resultado=dividir(x,y);

                if (y==0)
                {
                    printf("\nNO SE PUEDE DIVIDIR POR CERO...REINGRESE!!!!!!\n");
                }
                else
                {
                    printf("\nLa division entre %.2f / %.2f es: %.2f\n",x,y, resultado);
                }

            }

            else
            {
                printf("\nError, debe ingresar dos datos validos \n");

            }
            break;

        case 6://Multiplicacion
            system("clear");
            if (flag1==1 && flag2==1)
            {
                resultado=multiplicar(x,y);
                printf("\nLa multiplicacion entre %.2f * %.2f es: %.2f\n",x,y, resultado);
            }
            else
            {
                printf("\nError, debe ingresar dos datos validos \n");

            }

            break;
        case 7://Factorial
            system("clear");
            if (flag1==1 && flag2==0)
            {
                resultado=factorial(x);
                printf("\nEl factorial ! de %.2f es:  %.2f\n", x, resultado);
            }
            else
            {
                printf("\nError, debe ingresar un solo operando A \n");

            }
            break;
        case 8://Total operaciones
            system("clear");
            if (flag1==1 && flag2==1)
            {
                resultado=totalOPeraciones(x,y);

            }
            else
            {
                printf("\nError, debe ingresar dos datos validos \n");
            }

            break;
        case 9://Salir
            seguir = 'n';
            break;
        }



    }
    while(seguir=='s');


    return 0;

}













