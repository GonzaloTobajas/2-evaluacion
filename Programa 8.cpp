#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
    int x;
    int *px;
    x=3;
    px=&x;
    printf("x= %d/n",x);
    printf("px=%x",px);

    return 0;
}
