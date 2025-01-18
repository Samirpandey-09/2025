//Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop.
#include<stdio.h>
int main(){
    int num,factorial=1;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num>0){
        factorial=num*factorial;
        --num;
    }
        printf("the factorial of number is equall to = %d",factorial);
}