#include <stdio.h>
#include <string.h>



struct Alumno {

    char nombre[50]; 
    int edad;
    float nota;
};

int main()
{

    struct Alumno alumno1 = { "Carlos", 20, 5.5 };
    struct Alumno alumno2 = { "Pepe", 17, 7.5 };
    struct Alumno alumno3 = { "Ana", 22, 4.7 };

    struct Alumno alumnos[3] = {alumno1, alumno2, alumno3};

    /* Escritura */
    FILE *f = fopen("alumnos.txt", "w"); /* 'w' para escritura, 'r' para lectura */

    /* Intrucción para controlar posible error */
    /* No es obligatorio pero es recomendable */
    if (f == NULL) {
        printf("Error al crear el archivo\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(f, "Nombre: %s, edad: %d, nota: %.1f\n", alumnos[i].nombre, alumnos[i].edad, alumnos[i].nota);
    }

    /* Obligatorio cerrar el flujo */
    fclose(f);

    /* Opcionalmente podemos indicar que el archivo se ha generado correctamente */
    printf("El archivo alumnos.txt se ha generado correctamente");

    return 0;
    
}

