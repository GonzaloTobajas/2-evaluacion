#include <stdio.h>
#include <stdlib.h>

int main() {
    char palabra1[20], palabra2[20], palabra3[20], palabra4[20]; //Máxima longitud de 20
    
    printf("Introduce la primera palabra: ");
    scanf("%s", palabra1);
    
    printf("Introduce la segunda palabra: ");
    scanf("%s", palabra2);
    
    printf("Introduce la tercera palabra: ");
    scanf("%s", palabra3);
    
    printf("Introduce la cuarta palabra: ");
    scanf("%s", palabra4);
    
  
    printf("Las palabras introducidas son: %s, %s, %s, %s\n", palabra1, palabra2, palabra3, palabra4);
    
    return 0;
}

