#include<stdio.h>


int main(){

int num;
printf("please enter numer :"); 

scanf("%d",&num);

for(int i =2;i <num;i++){

if(num%i==0){


printf("%d is not prime number",num);
return 0;

}

printf("%d is a prime number",num);

return 0;
}




  
}