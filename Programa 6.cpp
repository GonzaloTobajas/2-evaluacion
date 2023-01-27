#include<iostream>
using namespace std;
int esPitagorica(int num1,int num2,int num3 ){
    int c1,c2,hip;
    int respuesta=0;
    if(num1>num2 && num1>num3){
        hip=num1;
        c1=num2;
        c2=num3;
    }
    if(num2>num1 && num2>num3){
        hip=num2;
        c1=num1;
        c2=num3;
    }
    if(num3>num2 && num3>num1){
        hip=num3;
        c1=num1;
        c2=num2;
    }
    if(hip*hip==c1*c1+c2*c2) respuesta==1;
return respuesta;
}
int main(){
    int num1,num2,num3;
    int respuesta;
    cout<<"Inroduce 3 numeros"<<endl;
    cout<<"Primer número: ";
    cin>>num1;
    cout<<"Segundo número: ";
    cin>>num2;
    cout<<"Tercer número: ";
    cin>>num3;
    respuesta=esPitagorica(num1,num2,num3);
    if(respuesta==1){
        cout<<"Es una terna pitagórica";
    }
    else{
        cout<<"No es una terna pitagórica";
    }
}