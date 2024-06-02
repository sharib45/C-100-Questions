#include<stdio.h>


int main(){

printf("please enter two number to perform action:  ");


float a ,b;

char opr;

float res;

scanf("%f %f",&a,&b);

printf("please enter opration : + or - or / or *:  ");

scanf(" %c",&opr);

int invalid=0;

switch(opr){

case '+':

res = a+b;

break;

case '-':

res = a-b;

break;

case '*':

res = a*b;

break;

case '/':

res = a/b;

break;


default:

invalid=1;


break;
}

if(invalid==0){
printf("result is %f",res);
}

else{

printf("please enter right key \n");

printf("pleease enter right key");

}

}