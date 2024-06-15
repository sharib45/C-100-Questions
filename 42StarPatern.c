#include<stdio.h>


int main(){

int row;
printf("please enter numer of row :"); 

scanf("%d",&row);

for(int i =1; i<=row;i++){

printf("\n");


for(int j =0; j<i; j++ ){

printf("* ");

}



}


printf("\n revesrse piramid");

for(int i =1; i<=row;i++){

printf("\n");


for(int j =row; j>=i; j-- ){

printf("* ");

}



}


printf("\n left revesrse piramid\n");

for(int i =1; i<=row;i++){

printf("\n");


for(int j =row; j>=i; j-- )
{

printf("  ");

}


for(int k =1; k <=i; k++)
{
printf("* ");

}




}

return 0;
}