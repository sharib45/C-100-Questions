#include<stdio.h>


int main(){


int num;

printf("please enter num to print odd sum to 0 1 to given number: ");

scanf("%d",&num);


int i=1;
int sum=0;
while(i<=num)

{
  sum +=i;
  i +=2;

  }
printf(" num is %d",sum);

return 0;

}

