#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char palabras[4][MAX_LENGTH];
    int i, j, pos;

    
    for (i = 0; i < 4; i++) {
        printf("Introduce una palabra %d: ", i+1);
        scanf("%s", palabras[i]);
    }

    
    printf("\nLas palabras introducidas son:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", palabras[i]);
    }

    
    for (i = 0; i < 4; i++) {
        printf("\nIntroduce la posición de la letra que desea obtener en la palabra %d: ", i+1);
        scanf("%d", &pos);

        if (pos < 1 || pos > strlen(palabras[i])) {
            printf("La posición no es válida.\n");
        } else {
            printf("La letra en la posición %d de la palabra %d es '%c'\n", pos, i+1, palabras[i][pos-1]);
        }
    }

    return 0;
}
