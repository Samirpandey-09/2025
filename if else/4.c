//Write a C program to find whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0){
        printf("leap year");

    }
    else if(year%400==0){
     printf(" leap year");
    }
    else if (year%100==0){
        printf("not a leap year");}
        else {
            printf("not a leap year");
        }
    
}