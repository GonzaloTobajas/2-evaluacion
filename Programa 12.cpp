#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(){
    long semillita;
    int cont;
    semillita=time(0);
    srand(semillita);
    for(cont=0;cont=100;cont++){
        cout<<"Un número al azar: "<<rand()%6+1<<endl;
    }
    
    return 0;
}