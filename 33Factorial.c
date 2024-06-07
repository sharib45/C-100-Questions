#include<stdio.h>

int main(){


int num;
printf("pleae enter numer to find factoial:  ");
scanf("%d",&num);


int i=1;

int fact =1;
while(i<=num){

fact = fact*i;


i++;

}

printf("factorial is %d",fact);

return 0;

}