/*Write a C program that calculates and prints the sum of cubes of even numbers 
up to a specified limit (e.g., 20) using a while loop*/
#include <stdio.h>
int main(){
    int num,cube,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    while(num>=1){
        if(num%2==0){
            cube=num*num*num;
            sum=sum+cube;
        }
        
            --num;

        
        
    }
    printf("the sum of cubes of even number is equal to %d",sum);
}