#include <stdio.h>

int numero = 10;
char letra = 'a';

/* Declaracion de array de forma explícita */
int numeros[5];

/* Declaración de array de forma implícita */
int otrosNumeros[] = {2, 4, 5, -8, 2};

/* Ejercicio1. Vamos a recorrer un array (otrosNumeros) con un bucle */

/* Ejercicio2. Declara un array con 5 elementos, y rellena el array con 5 numeros enteros*/

/* Ejercicio3. Suma el array1 y el array2 y el resultado será un array nuevo */

int array1[] = {2, 4, 5, 2, 1};
int array2[] = {2, 2, 1, 3, 2};
int arrayResultado[5];

/* Ejercicio4. Accede a la segunda posición de un array */


/* Para recorrer arrays, la primero posición siempre va a ser 0 */


int main()
{

    /*Ejercicio 1 */

    for(int i = 0; i < 5; i++){
        printf("%d\n", otrosNumeros[i]);
    }

    /* Para recuperar la posicion 3 del array */
    /* Primera posición -> 0 */
    /* Segunda posición -> 1 */
    /* Tercera posición -> 2 */
    printf("Posicion 3: %d\n", otrosNumeros[2]);


    /* Ejercicio 2 */

    int numero = 5;

    for(int i = 0; i < 5; i++) {

        numeros[i] = numero;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    /* Ejercicio 3 */

    printf("Ejercicio3: \n");

    for(int i = 0; i < 5; i++) {

        arrayResultado[i] = array1[i] - array2[i];
        printf("%d\n", arrayResultado[i]);
    }

    /* Ejercicio 4 */

    printf("Segunda posición del array1 es: %d\n", array1[1]);









    return 0;

}
