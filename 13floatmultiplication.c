#include<stdio.h>

int main(){

float numberone ;

float numtwo;

printf("enter the number one is : ");


scanf("%f", &numberone);

printf("enter the valuve of number two :");

scanf("%f",&numtwo);



float result = numberone*numtwo;

printf("\n product is : %f", result );

printf("\n product is :%.2f", result);


return 0;
}