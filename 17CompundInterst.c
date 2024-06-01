#include<stdio.h>
#include<math.h>

int main(){

float principle , rate,timeloan;


printf("welocome in intersert calculator\n");

printf("please enter pricipal amount: ");

scanf("%f",&principle);

printf("please enter rate of intersrt: ");

scanf("%f",&rate);

printf("please enter time limit of loan: ");

scanf("%f",&timeloan);

float interst = principle* pow((1+rate/100),timeloan);



printf("total loan amount is : %f", interst);


}