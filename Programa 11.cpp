#include<iostream>
#include<stdio.h>
using namespace std;
int cuenta_letras(char *p_nombre){
    int cont;
    cont=0;
    while(*(p_nombre+cont)!='\0'){
       cont++; 
    }
   return cont;
}

int main(){
    char *reyes[3];
    char nombre[10];
    int longitud;
    int cont;
   
    cout<<"Dime el nombre del primer rey mago: ";
    cin>>nombre;
    cout<<"\nHas introducido el nombre de "<<nombre;
    //longitud=cuenta_letras(nombre);
    for(cont=0;cont<=10;cont++){
        printf("\n%c",*(nombre+cont));
        malloc()
    }
    printf("Longitud= %d",longitud);
    return 0;
}