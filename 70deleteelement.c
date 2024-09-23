#include<stdio.h>


void delete(int arr[],int size ,int new_arr[], int *newsize, int element);
void print_arr(int arr[],int size);

int main(){

 printf("welcome delter array program");

 int arr[8]={4,5,5,6,10,2,3,0};
int new_arr[8];
int new_size;

delete(arr,8,new_arr,&new_size,5);
printf("\n after deleting array is :");
print_arr(new_arr,new_size);

}

void print_arr(int arr[],int size){

 for(int i=0;i<size;i++){

printf("%d",arr[i]);


 }


}

void delete(int arr[],int size ,int new_arr[], int *newsize, int element){

   int j=0;

   for(int i = 0;i<size;i++){

    if(arr[i]!=element){

     new_arr[j++] = arr[i];

    }

    

   }

*newsize = j;

}