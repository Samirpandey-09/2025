//Write a C program to accept two integers and check whether they are equal or not.
//Test Data : 15 15
//Expected Output :
//Number1 and Number2 are equal

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter the number 1 and number 2");
    scanf("%d%d",&num1,&num2);
    if(num1==num2){
        printf("%d and %d are equal",num1,num2);

    } 
    else { printf("%d and %d are not equal\n", num1, num2);}
}