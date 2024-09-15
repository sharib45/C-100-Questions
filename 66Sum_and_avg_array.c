#include<stdio.h>


int sum (int arr[],int size);



int main(){

int arr[10];

int size = 10;

for(int i = 0 ; i<size;i++){

printf("please enter the %dth number " ,(i+1));

scanf("%d",&arr[i]);


}
int sumtotal = sum(arr,size);

printf("sum is %d",sumtotal);

float avg = sumtotal/10.0;

printf("average of array is %.2f",avg);



}

int sum(int arr[],int size){

int sum =0;
for (int i =0 ; i<size;i++){

sum +=arr[i];


}

return sum;

}