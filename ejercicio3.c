#include <stdio.h>
#include <string.h>

/* Objetos - Structs */

struct Alumno {

    /* En los structs no se pueden inicializar directamente las variables */
    /* Solo se pueden declarar */

    char nombre[50]; /* Para variables de cadena es obligatorio indicar el tamaño de la cadena */
    int edad;
    float nota;
};

int main()
{
    struct Alumno alumno1 = { 18, 8 };
    struct Alumno alumno2; /* Instancias del objeto */

    alumno1.edad = 27;
    alumno1.nota = 6.5;

    printf("La nota del alumno1 es %.1f", alumno1.nota);

    alumno1.edad = 20;
    alumno1.nota = 9.5;

    /* Crear struct de forma explícita */
    struct Alumno alumno3 = { 22, 7 };
    
    return 0;
}