#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define P 20

void estado_Inicial_Personas (EPersona personas[])
{
    int i;

    for(i=0; i<P; i++)
    {
        personas[i].estado=0;
    }

}

void cargar_Personas (EPersona personas[], int tam)
{
    int i, flagEspacios;

    flagEspacios=0;

    for(i=0; i<P; i++)
    {
        if (personas[i].estado==0)
        {
            printf("Ingrese el dni:  ");
            scanf("%d",  &personas[i].dni);
            printf("Ingrese nombre:  ");
            fflush(stdin);
            gets(personas[i].nombre);
            printf("Ingrese edad:  ");
            scanf("%d", &personas[i].edad);
            while (personas[i].edad <0 || personas[i].edad >99)
            {

                printf("\nError, ingrese una edad menor a 100 o mayor a 0\n");
                printf("Ingrese edad:  ");
                scanf("%d", &personas[i].edad);

            }

            personas[i].estado=1;
            mostrarPersonas(personas[i]);
            flagEspacios=1;

            break;
        }
    }

    if(flagEspacios==0)
    {
        printf("\nNo hay mas espacio de carga, de de baja alguna persona!!!!\n");
    }


}

void borrar_Personas (EPersona mPersonas[], int tam)
{
    int auxDni, i, respuesta, flagEspacios;

    flagEspacios=0;
    printf("Ingrese el dni de la persona a eliminar: ");
    scanf("%d", &auxDni);

    for(i=0; i<P; i++)
    {
        if(mPersonas[i].estado==1 && auxDni == mPersonas[i].dni)
        {

            mostrarPersonas(mPersonas[i]);

            printf("\nEsta seguro que desea eliminar?: ");
            respuesta = getche();
            if(respuesta=='s')
            {
                printf("\nSe ha eliminado: \n\n" );
                mPersonas[i].estado=0;

            }
            else
            {
                printf("\nSe cancelo la operacion \n");
            }

        }
        flagEspacios=1;
    }
}

void ordenarPersonas(EPersona personas[], int orden)
{
    int i;
    int j;
    EPersona auxPersona;

    for (i=0; i<P-1; i++)
    {
        for(j=i+1; j<P; j++)
        {
            if(stricmp(personas[i].nombre, personas[j].nombre)>0)
            {
                auxPersona = personas[i];
                personas[i] = personas[j];
                personas[j] = auxPersona;
            }
        }
    }
    for (i=0; i<P; i++)
    {
        if (personas[i].estado == 1 )
        {
            printf("NOMBRE: %s\t DNI: %d\t EDAD: %d\n\n", personas[i].nombre, personas[i].dni, personas[i].edad );
        }
    }
}

void grafico_Edades_Personas (EPersona personas[], int tam)
{

    int contaMenor=0;
    int contaMayor=0;
    int contaAdultos=0;
    int max=0;
    int vectorGrafico [3];
    int i, j;

    for (i=0; i<P; i++)
    {
        if( personas[i].estado==1 && personas[i].edad <18)
        {
            contaMenor++;
        }

        else if (personas[i].estado==1 && personas[i].edad >18 && personas[i].edad <35)
        {
            contaMayor++;
        }

        else if (personas[i].estado==1 && personas[i].edad >35)
        {
            contaAdultos++;
        }
    }

    vectorGrafico[0]=contaMenor;
    vectorGrafico[1]=contaMayor;
    vectorGrafico[2]=contaAdultos;

    for (i=0; i<3; i++)
    {
        if (vectorGrafico[i]>max)
        {
            max=vectorGrafico[i];
        }

    }

    for (i=max; i>0; i--)
    {
        for (j=0; j<3; j++)
            if (vectorGrafico[j]>=i)
            {
                printf(" *\t");
            }

            else
            {
                printf("\t");
            }


        printf("\n");

    }
    printf("<18    19-35    >35\n");


}





void mostrarPersonas (EPersona personas)
{
    printf("\nDNI: %d\t NOMBRE: %s\t EDAD: %d\n\n", personas.dni, personas.nombre, personas.edad);
}

