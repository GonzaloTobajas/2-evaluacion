#include<iostream>
using namespace std;

int main(){
    int resp;
    cout<<"****************"<<endl;
    cout<<"*     MENU     *"<<endl;
    cout<<"****************"<<endl;
    cout<<"1.Volver a mostrar el menu"<<endl;
    cout<<"2.Despedirme"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"ELIGE UNA RESPUESTA(1,2 o 3): ";
    cin>>resp;
    switch(resp){
        case 1:
            cout<<"****************";
            cout<<"*     MENU     *";
            cout<<"****************";
            cout<<"1.Volver a mostrar el menu"<<endl;
            cout<<"2.Despedirme"<<endl;
            cout<<"3.Salir"<<endl;
            cout<<"ELIGE UNA RESPUESTA(1,2 o 3): ";
            break;
        case 2:
            cout<<"Estás despedido";
            break;
        case 3:
            break;
        default:
            cout<<"No has elegido ninguna opción";
    }
    return 0;
}