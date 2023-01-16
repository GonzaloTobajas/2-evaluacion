#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
    char letra[]="historia";
    int cont;
    for(cont=0;cont<=7;cont++){
        printf("Dame la letra[%d] --> %c\n",cont,letra[cont]);
    }
    
    return 0;
}