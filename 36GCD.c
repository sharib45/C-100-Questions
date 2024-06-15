#include<stdio.h>

int main(){

int num1 ,num2;


printf("please enter number 1 : ");


scanf("%d",&num1);

printf("pleae enter second number :");


scanf("%d",&num2);

int min = num1<num2 ? num1 :num2;



for(int i = min; i>=1;i--){

if( num1 %i==0 && num2%i==0){

printf("%d",i);

break;
}



}



}