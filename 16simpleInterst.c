#include<stdio.h>

int main(){

float principle , rate,timeloan;


printf("welocome in intersert calculator\n");

printf("please enter pricipal amount: ");

scanf("%f",&principle);

printf("please enter rate of intersrt: ");

scanf("%f",&rate);

printf("please enter time limit of loan");

scanf("%f",&timeloan);

float interst = (principle*rate*timeloan)/100;



printf("total loan amount is : %f", interst);


}