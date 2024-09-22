#include<stdio.h>




int main(){

int arr[10];

printf("welcome to max and min Arrray");


int size = 10;

for(int i = 0 ; i<size;i++){

printf("please enter the %dth number " ,(i+1));

scanf("%d",&arr[i]);

}

int max = arr[0];

int min = arr[0];

for(int i =1;i<size;i++){

if(max < arr[i]){

 max = arr[i];

}

if(min > arr[i]){

 min = arr[i];

}


}

printf("valuve of max is %d amd valuve of min is %d",max,min);

}
