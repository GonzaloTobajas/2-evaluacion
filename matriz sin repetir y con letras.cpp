#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int *filas[3];
    long seed=(time(0));
    int random;
    srand(seed); //Produce una semilla
    
    for (int ct=0;ct<3;ct++){
        filas[ct]=(int *)malloc(3*sizeof(int));
        cout<<"Fila "<<(ct+1)<<": ";
        for (int ct2=0;ct2<3;ct2++){
            bool repetido;
            do {
                random=(rand() % 10 + 'a');
                repetido = false;
                for (int ct3 = 0; ct3 < ct2; ct3++) {
                    if (*(*(filas+ct)+ct3) == random) { //PARA RECORDAR: lo que hace es que en un bucle, chckea los tres numeros, y si coinciden con el valor random que se estaba creando, se hace otro, si no, se checkea tres veces con cada numero hasta que se acabe la cuenta
                        repetido = true;
                        break;
                    }
                }
            } while (repetido);
            *(*(filas+ct)+ct2)=(random);
            cout<<(char)(*(*(filas+ct)+ct2))<<" ";
        }
      	cout<<"\n";
    }
    return 0;
}