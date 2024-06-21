#include<stdio.h>



int main(){


int max;

int sum=0;

printf("please enter number for max sum:  ");

scanf("%d",&max);


for(int i =1;i<=max;i++){

if(i%2==0) continue;

sum = sum+i;

}

printf("some of max even %d",sum);

return 0;





}







