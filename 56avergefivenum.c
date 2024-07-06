#include<stdio.h>

float avg(int,int,int,int,int);


int main(){

int a,b,c,d,e;

printf("\nwelcome to print average\n");

printf("please enter first number: ");
scanf("%d",&a);
printf("please enter two number: ");
scanf("%d",&b);
printf("please enter three number: ");
scanf("%d",&c);
printf("please enter four number: ");
scanf("%d",&d);
printf("please enter five number: ");
scanf("%d",&e);

float retrn_avg = avg(a,b,c,d,e);



printf("avg is %f",retrn_avg);


return 0;
}

float avg(int a,int b ,int c, int d,int e){

float sum = a+b+c+d+e/5;
return sum/5;


}