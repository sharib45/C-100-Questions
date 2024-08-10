#include<stdio.h>


int main(){

int num;

int *ptr = &num;

printf("please enter the valuve of num ");
scanf("%d", ptr);


printf("\n the valuve of num is %d", *ptr);

printf("\n the value of %d " , num);


}