#include <stdio.h>

int main() {

    /* Ejemplo 1 - MATRICES */

    /* Declaramos una matriz de 3 filas y 3 columnas y la inicializamos con valores */

    int matriz[3][3] = {
        {1, 2, 3},   // fila 0
        {4, 5, 6},   // fila 1
        {7, 8, 9}    // fila 2
    };

    /* Recorremos la matriz con dos bucles anidados */
    /*  i recorre las filas */
    /*  j recorre las columnas */

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            // matriz[i][j] accede a la celda de fila i, columna j
            printf("%d ", matriz[i][j]);
        }
        // Al terminar cada fila, saltamos de línea
        printf("\n");
    }



    /* Ejemplo 2 - SUMAR MATRICES */

    // Primera matriz
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Segunda matriz
    int b[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    /* Matriz donde guardaremos el resultado. No la inicializamos, la rellenaremos en el bucle */
    int resultado[3][3];

    /* Recorremos celda a celda y sumamos
     la celda [i][j] de 'a' con la celda [i][j] de 'b' */

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            /* Guardamos la suma en la misma posición de resultado */
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }

    /* Mostramos la matriz resultado */
    printf("Resultado:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;

}