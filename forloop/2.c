//Write a C program to compute the sum of the first 10 natural numbers.
#include<stdio.h>
int main (){
    int i, sum=0;
    for(i=1;i<=10;i++){
        sum=sum+i;
    }
    printf("sum of first 10 natural number = %d",sum);
}