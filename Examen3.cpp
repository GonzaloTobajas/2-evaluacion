#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int long_palabra(char *palabra) {
    int longit = 0;
    while (*palabra != '\0') { 
        longit++;
        palabra++;
    }
    return longit;
}

int main() {
    char *palabras[4];
    int i;

    for (i = 0; i < 4; i++) {
        palabras[i] = (char*) malloc(50 * sizeof(char)); 
        printf("Introduce una palabra %d: ", i+1);
        scanf("%s", palabras[i]); 
    }

    printf("\nLas palabras introducidas son:\n");

    for (i = 0; i < 4; i++) {
        printf("%s (longitud: %d)\n", palabras[i], long_palabra(palabras[i])); 
    }
    for (i = 0; i < 4; i++) {
        free(palabras[i]);
    }
    return 0;
}