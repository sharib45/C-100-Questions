#include<stdio.h>

int main(){

int num1 ,num2;


printf("please enter number 1 : ");


scanf("%d",&num1);

printf("pleae enter second number :");


scanf("%d",&num2);

int min = num1>num2 ? num1 :num2;

printf("%d",min);

int max = num1*num2;


for(int i = min;i <=max;i++){

if(i%num1==0 && i% num2==0){


printf("Lcm of %d and %d is %d",num1,num2,i);

break;

}



}

return 0;


}