//Write a C program to check whether a given number is even or odd.
//Test Data : 15
//Expected Output :
//15 is an odd intege
#include<stdio.h>
int main(){
    int num;
    printf("enter the no");
    scanf("%d",&num);
    if(num%2==0){
        printf("the no is even");

    }
    else
    { printf("the no is odd");
    }
}