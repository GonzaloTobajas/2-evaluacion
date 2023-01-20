#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
    char letra;
    char *p_letra;
    letra='A';
    p_letra=&letra;
    printf("letra=%c/n",letra);
    printf("pletra=%x",p_letra);
    return 0;
}
