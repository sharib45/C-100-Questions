#include<stdio.h>


int main(){

int num;
printf("please enter numer :"); 

scanf("%d",&num);

printf("0");

if(num>0){

printf("1");


}


int pre = 0;

int next =1;

int temp = pre+next;


while(temp <= num) {
printf("\n%d \n",temp);
pre = next;

next = temp;

temp = pre+next;




}


}