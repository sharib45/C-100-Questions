#include<stdio.h>


int fab(int pos);


int main(){

int terms;

printf("please ernter the term : ");

scanf("%d",&terms);

for(int i=0 ;i<terms;i++){

printf("%d",fab(i));


}

return 0;


}

int fab(int pos){

  if(pos<=1){

    return pos;
  }

   int current = fab(pos-1)+fab(pos-2);

   return current;

}