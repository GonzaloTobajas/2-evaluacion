//Instrucciones básicas
#include<iostream>//Librería de cabecera
using namespace std;

int main(){
    //definimos 3 variables
    int edad;
    cout<<"Introduce tu edad: ";
    cin>> edad;
    if(edad>=18){
        //Rama verdadero
        cout<<"Eres mayor de edad";
    }
    else{
        //Rama falso
        cout<<"Eres menor de edad";
        }
    return 0;
}