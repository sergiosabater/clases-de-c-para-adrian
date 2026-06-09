#include <stdio.h>
#include <string.h>

/* Objetos - Structs */

struct Alumno {

    char nombre[50]; 
    int edad;
    float nota;
};

int main()
{

    struct Alumno alumno1 = { "Carlos", 20, 5.5 };
    struct Alumno *punteroAlumno1 = &alumno1; /* Puntero a alumno1 */

    float notaMediaDelAlumno = 8.7; /* Convenio de escritura de variables 'CamelCase' */

    punteroAlumno1->edad = 20;
    punteroAlumno1->nota = 8.4;

    /* punteroAlumno1->nombre = "Nombre"; ESTO NO SE PERMITE CON PUNTEROS. EN SU LUGAR HAY
    QUE USAR LA FUNCION STRCPY */

    strcpy(punteroAlumno1->nombre, "Pepito");

    printf("El nombre es: %s, nota: %.1f, edad: %d", alumno1.nombre, alumno1.nota, alumno1.edad);

}