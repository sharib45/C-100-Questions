#include<stdio.h>


int main(){


int num ;


printf("welocome the sequre of world :\n\n");

while(1){

printf("please enter the number:\n ");

scanf("%d",&num);

if(num ==-1) {
printf("loop close") ;
break;
}
printf("sequre of num is %d \n",num*num);


}

return 0;


}