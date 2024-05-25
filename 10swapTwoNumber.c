#include<stdio.h>

int main(){


int firstnum ;

int secondnum;


printf("Enter the numer one is : ");

scanf("%d",&firstnum);

printf("enter the second number: ");

scanf("%d",&secondnum);


int  c = firstnum;

firstnum = secondnum;


secondnum = c;


printf("now number are change  first number is %d \n seoncd number is %d", firstnum,secondnum);



}