#include <stdio.h>
#include <stdlib.h>

/** \brief Solicita dos numeros al usuario y devuelve la sumatoria de ambos
 *
 * \param posee un parametro flotante A, primer operando
 * \param posee un parametro flotante B, segundo operando
 * \return retorna al resultado de dicha operacion
 *
 */

float sumar(float a, float b)
{
    float suma;

    suma=a+b;
    return suma;

}

/** \brief Solicita dos numeros al usuario y devuelve la resta de ambos
 *
 * \param posee un parametro flotante A, primer operando
 * \param posee un parametro flotante B, segundo operando
 * \return retorna al resultado de dicha operacion
 *
 */



float restar (float a, float b)
{
    float resta;

    resta=a-b;
    return resta;

}

/** \brief Solicita dos numeros al usuario y devuelve la division de ambos
 *
 * \param posee un parametro flotante A, primer operando
 * \param posee un parametro flotante B, segundo operando
 * \return retorna al resultado de dicha operacion
 *
 */



float dividir (float a, float b)
{
    float divi;

    divi= a/b;
    return divi;

}

/** \brief Solicita dos numeros al usuario y devuelve la multiplicacion de ambos
 *
 * \param posee un parametro flotante A, primer operando
 * \param posee un parametro flotante B, segundo operando
 * \return retorna al resultado de dicha operacion
 *
 */



float multiplicar (float a, float b)
{
    float multi;

    multi= a*b;
    return multi;
}

/** \brief Solicita un numero al usuario y devuelve el resultado factorial
 *
 * \param posee un parametro flotante A, operando
 * \return retorna al resultado de dicha operacion
 *
 */


float factorial (float a)
{
    float i;
    float resultado=1;

    for (i=a; i>0; i--)
    {
        resultado=resultado * i;
    }

    return resultado;
}

/** \brief Solicita dos numeros al usuario y devuelve todas las operaciones
 *
 * \param posee un parametro flotante A, primer operando
 * \param posee un parametro flotante B, segundo operando
 * \return retorna al resultado de dichas operaciones
 *
 */



float totalOPeraciones (float a, float b)
{
    float suma;
    suma=a+b;
    printf("\nLa suma entre %.2f + %.2f es: %.2f\n",a,b, suma);


    float resta;
    resta=a-b;

    printf("\nLa resta entre %.2f - %.2f es: %.2f\n",a,b, resta);

    float divi;
    divi= a/b;

    printf("\nLa division entre %.2f / %.2f es: %.2f\n",a,b, divi);

    float multi;
    multi= a*b;

    printf("\nLa multiplicacion entre %.2f * %.2f es: %.2f\n",a,b, multi);

    float i;
    float resultado=1;
    for (i=a; i>0; i--)
    {
        resultado=resultado * i;
    }

    printf("\nEl factorial ! de %.2f es:  %.2f\n", a, resultado);



}


