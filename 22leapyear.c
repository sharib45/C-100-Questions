#include<stdio.h>

int main(){


int year;

printf("please enter your year: ");

scanf("%d",&year);



if(year%400==0 || (year%4==0 && year%100!=0)){

printf("your year is leap year");
}

else {

printf("your year is not leap year");

}









// if(year%400==0){

// printf("your year is leap year");

  
// }

// else if(year%100==0){

// printf("your year is not leap year");




// }

// else if (year%4==0){

// printf("your year is leap year");



// }


// else{


// printf("your year is not laep year");

// }



}
