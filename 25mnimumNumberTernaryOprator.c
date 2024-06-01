#include<stdio.h>


int main(){

int  a,b;

printf("please enter two number");

scanf("%d %d",&a,&b);

int min = a <b ? a :b;

printf("minimum number is %d",min);

}