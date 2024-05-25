#include<stdio.h>


int main(){

int first_num;

int second_num;


printf("please enter first number :");

scanf("%d",&first_num);

printf("please enter secnd  number :");

scanf("%d",&second_num);


int sum = first_num+second_num;

int mul = first_num*second_num;

int div = first_num/second_num;

int sub =  first_num-second_num;

int rem = first_num%second_num;

printf("Result of all operation is \n sum is : %d \n Multiplication is : %d \n Divsion is : %d \n Substraction is : %d \n remainerd is %d", sum,mul,div,sub,rem);


}