//Write a program in C to display n terms of natural numbers and their sum
#include<stdio.h>
int main(){
    int term,sum=0;
    printf("enter the nummber");
    scanf("%d",&term);
        for(int i=1 ; i<=term;i++){
            printf("%d  ",i);
            sum=sum+i;
        }
        printf("sum of the  terms = %d", sum);
}