#include<stdio.h>




int main(){

int num;
printf("please enter numer :"); 

scanf("%d",&num);


int reverse =0;

int copy = num;

while(copy>0){

reverse = (reverse*10)+ (copy%10);

copy /=10;





}

if(num==reverse){

printf("palidrome");


}



}