#include<stdio.h>

void numadd(int);


int main(){

int num;

printf("\nplease enter number:\n");
scanf("%d",&num);

printf("\nvaluve of num before function is %d\n",num);

numadd(num);

printf("\nvaluve of num after fuction is %d\n",num);



}

void numadd(int a){

printf("\nbefore fuction number %d",a);

a++;


printf("\n after fuction number %d",a);

}