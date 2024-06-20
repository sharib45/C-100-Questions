#include<stdio.h>



int main(){




int num;
int sum =0;

do{
printf("please enter a number");

scanf("%d",&num);

sum = sum+num;


}

while(num!=0);

printf("sum of all number is %d",sum);




return 0;

}