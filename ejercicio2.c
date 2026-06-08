#include <stdio.h>
#include <string.h>


int main()
{
    char texto[] = "Hola Pepe";
    size_t numeroCaracteres = strlen(texto);

    printf("La frase: %s ", texto);
    printf("tiene %zu caracteres\n", numeroCaracteres);
    
    return 0;
}
