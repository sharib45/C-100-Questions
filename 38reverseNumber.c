#include<stdio.h>


int main(){


int num;
printf("please enter numer :"); 

scanf("%d",&num);


int copy = num;

int revers=0;

while(copy>0){

revers = (revers*10)+(copy%10);

copy = copy/10;






}

printf("the revrs of %d is %d",num,revers);

}