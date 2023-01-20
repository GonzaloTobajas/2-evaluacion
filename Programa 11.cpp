#include<iostream>
#include<stdio.h>
using namespace std;
int cuenta(char *p_nombre){
    cont=0;
    while(*(p_nombre+cont)!='\0'){

    }
}
int main (){
    char *reyes[3];
    char nombre[10];
    int longitud;
    cout<<"Dime el nombre del primer rey mago --> ";
    cin>>nombre;
    cout<<"\nHas introducido el nombrede "<<nombre;
    for(cont=0;cont<=10;cont++){
        printf("\n%c",*(nombre+cont));
    }
    return 0;
}