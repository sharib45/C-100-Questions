#include<stdio.h>

int main(){


int marks;

printf("please enter your marks");

scanf("%d",&marks);


if(marks<0 || marks >100){

printf("you enter input wromg marks");


}

else if(marks>90){

printf("you have A grade");


}

else if(marks>75){

printf("you have B grade");

}

else if(marks>60){

printf("you have c grade");

}


else if(marks>30){

printf("you have D grade");

}

else{

printf ("you are fail");


}


}
