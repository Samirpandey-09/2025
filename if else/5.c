//Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("congratulation you are eligible to caste your vote");

    }
        else {
            printf("not elisible to vote");
        }
}
