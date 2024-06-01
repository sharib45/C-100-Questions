#include<stdio.h>

int main(){

int a,b,c;


printf("enter three number:  ");

scanf("%d %d %d", &a ,&b,&c);



// if(a >=b && a>=c){


// printf("A is large number");



// }

// else if(b>=c){



//   printf("B is large number");
// }


// else{

// printf("c is large number");


// }



// 2nd method

// if(a>=b){

//    if(a>=c){

//    printf("a is large number");

//    }

//    else{

//    printf("c is large number");

//    }



// }

// else {

// if(b>=c){

// printf("b is large number");

// }

// else{

// printf("c is large number");

// }

// }


int max = a;

if(max<b){

max =b;


}

if(max<c){

max = c;

printf("c is large");

}

printf("large number is %d",max);



}


