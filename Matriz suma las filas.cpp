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
        cout<<"F"<<(ct+1)<<" | ";
        for (int ct2=0;ct2<3;ct2++){
            random=(rand() % 10);
            *(*(filas+ct)+ct2)=(random);
            cout<<*(*(filas+ct)+ct2)<<" ";
        }
        int suma = *(*(filas+ct)) + *(*(filas+ct)+1) + *(*(filas+ct)+2);
        cout << "| --> Suma: " << suma << endl;
        cout<<"\n";
    }
    return 0;
}