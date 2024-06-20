#include<stdio.h>


int main(){

int num;



printf("please enter your number to wannt print table::  ");

scanf("%d",&num);


for(int i =1;i<=10;i++){


printf("\n%d X %d = %d",num,i,num*i);


}

return 0;



}