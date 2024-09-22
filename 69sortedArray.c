#include<stdio.h>

int is_sorted(int arr[],int size);

int main(){

int arr1[] = { 1,3,5,9,27,99};
int arr2[] = { 50,40,30,20,10,5};
int arr3[] = { 1,3,5,9,27,4};


if (is_sorted(arr1,6)){
printf("\nfirst array is sorted ");

}
else{
printf("\nfirst   array is not sorted ");

}

if (is_sorted(arr2,6)){
printf("\nsecond array is sorted ");

}
else{
printf("\nsecond  array is not sorted ");

}

if (is_sorted(arr3,6)){
printf("\nthird array is sorted ");

}
else{
printf("\nthird  array is not sorted ");

}


return 0;

}

int is_sorted(int arr[],int size){

  int increesing =1;
  int decressing =1;

  for(int i =1 ; i<size;i++){

    if(arr[i] > arr[i-1]){

      decressing =0;
    }

    else if(arr[i] < arr[i-1]){
   
    increesing =0;


    }


  }


  return increesing || decressing;
}