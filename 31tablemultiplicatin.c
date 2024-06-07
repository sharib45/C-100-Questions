#include<stdio.h>

int main(){


int num;
printf("please enter a number for table :");

scanf("%d",&num);

int i =1;

while(i<=10){


printf("%d * %d = %d \n", num,i,num*i);

i++;

}

return 0;


}