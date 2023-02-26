#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *palabras[4]; 
    int i;

    for (i = 0; i < 4; i++) {
        palabras[i] = (char*) malloc(50 * sizeof(char)); 
        printf("Ingresa la palabra %d: ", i+1);
        scanf("%s", palabras[i]); 
    }

    printf("\nLas palabras introducidas son:\n");

    for (i = 0; i < 4; i++) {
        printf("%s\n", palabras[i]); 
    }

    
    for (i = 0; i < 4; i++) {
        free(palabras[i]);
    }

    return 0;
}