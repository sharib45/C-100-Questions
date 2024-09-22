#include<stdio.h>

int occurance(int arr[],int size, int number);

int main(){

int arr[] = {10,3,5,3,10,2,4,4,100,2};

int size = 10;

int result = occurance(arr,size,10);

printf("\nthe occurance is array 10is  %d",result);

result = occurance(arr,size,3);

printf("\nthe occurance is array 3 is %d",result);

result = occurance(arr,size,2);

printf("\nthe occurance is array 2 is %d",result);

 result = occurance(arr,size,5);

printf("\nthe occurance is array 5 is %d",result);

result = occurance(arr,size,7);

printf("\nthe occurance is array 7 is %d",result);


return 0;
}

int occurance(int arr[],int size, int number){

int count=0;

for(int i= 0;i<size;i++){

if(number==arr[i]){

  count++;
}

}

return count;


}

