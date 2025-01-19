//Write a C program to display the n terms of odd natural numbers and their sum
#include<stdio.h>
int main(){
    int term,sum=0,n;
    printf("enter the no of terms");
    scanf("%d",&n);


    for(int i=1;i<=n;i++){

        if(i%2!=0){
            printf("no of terms is %d\n ",i);
            sum+=i;
        }
    }
    printf("\n");
     printf("the sum of odd natural number is %d ",sum);
}