#include<stdio.h>


int square(int);

int main(){

int num;


printf("please enter number\n ");

scanf("%d",&num);

int res = square(num);

printf("%d",res);

return 0;

}

int square (int num){

return num*num;


}