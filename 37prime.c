#include<stdio.h>


int main(){

int num;
printf("please enter numer :"); 

scanf("%d",&num);


int i =2;

while(i <num){
if(num%i==0){


printf("%d is not prime number",num);
return 0;

}

i++;

}




printf("%d is a prime number",num);

return 0;
}




  
