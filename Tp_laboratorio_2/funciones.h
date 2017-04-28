#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * setea todos lso estados del array en 0, preparandolos para su posterior carga.
 * @param lista el array se pasa como parametro.
 * @return No devuelve nada.
 */
void estado_Inicial_Personas (EPersona[]);

/**
 * Busca por DNI los datos de la persona a ser eliminada.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.
 * @return No devuelve nada.
 */
void borrar_Personas (EPersona[], int);

/**
 * pide datos para la carga inicial, dni, edad, nombre.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.
 * @return No devuelve nada.
 */
void cargar_Personas (EPersona[], int);

/**
 * muestra graficos estadisticos de las edades.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.
 * @return No devuelve nada.
 */
void grafico_Edades_Personas (EPersona [], int);


/**
 * Muestra los datos de la persona ingresada luego de su carga.
 * @param lista el array se pasa como parametro.
 * @return No devuelve nada.
 */
void mostrarPersonas (EPersona);

/**
 * Ordena la lista de personas ingresadas por orden alfabetico.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array
 * @return No devuelve nada.
 */
void ordenarPersonas(EPersona[], int);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

#endif // FUNCIONES_H_INCLUDED
