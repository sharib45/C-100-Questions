#include<stdio.h>


int main(){

int num;
printf("please enter numer :"); 

scanf("%d",&num);


int sum=0;
int copy = num;
while(copy>0){

sum += (copy%10)*(copy%10)*(copy%10);



copy /=10;


}

if(sum==num){
printf(" num %d is armstromg number",sum);

}
return 0;

}