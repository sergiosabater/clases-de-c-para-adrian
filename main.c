
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL)); /* Semilla para aleatoriedad real */

    int aleatorio = rand() % 5;

    /* Formula para número aleatorio entre dos números */
    /* rand() % (MAX - MIN + 1) + MIN */


    /* Ejercicio 1. Genera un número aleatorio entre 10 y 20 */
    int aleatorio1 = rand() % (20 - 10 + 1) + 10;
    printf("El numero aletorio entre 10 y 20 es %d\n", aleatorio1);

    /* Ejercicio 2. Genera un número aletorio entre 22 y 43 */
    int aleatorio2 = rand() % (43 - 22 + 1) + 22;
    printf("El numero aletorio entre 22 y 43 es %d\n", aleatorio2);

    printf("%d", aleatorio);

    return 0;
}




