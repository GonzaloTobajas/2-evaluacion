#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(){
    long semillita;
    int filas;
    int col;
    int *matriz[3];
    semillita=time(0);
    srand(semillita);
    for(filas=0;filas<3;filas++){
        matriz[filas]=(int*) malloc(3*sizeof(int));
        for(col=0;col<3;col++){
            //*(matriz+filas)+col=rand()%10;

        }
    }

    return 0;