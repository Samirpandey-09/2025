//Write a C program to find the largest of three numbers.
#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    printf("enter three numbeers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("%d is grater among all",num1);

    }
        else if(num2>num1 && num2>num3){
            printf("%d is grateer among all",num2);

        }
        else {
            printf("%d is grater among all",num3);
        }
        return 0;
    }