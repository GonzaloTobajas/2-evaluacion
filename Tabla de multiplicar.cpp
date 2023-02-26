#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int numero;
    do{
        cout<<"DIME UN NUMERO --> ";
        cin>>numero;
        
    }
    while((numero<1) || (numero>10));//Hace que solo funcione para numeros del 1 al 10
    
    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
    }
    return 0;
}