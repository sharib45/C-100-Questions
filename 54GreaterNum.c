#include<stdio.h>


float max(float,float);


int main(){

float a,b;


printf("please enter first number: ");
scanf("%f",&a);
printf("please enter second number: ");
scanf("%f",&b);

printf("the larger number is %f",max(a,b));

return 0;

}



float max(float a, float b){

return a>b ? a :b;



}