//Write a program in C to read 10 numbers from the keyboard and find their sum and average
#include<stdio.h>
int main(){
    int i,num,sum=0;
    float avg;
    for(i=1;i<=10;i++){
        printf("enter the number\n");
        scanf("%d",&num);
        
        sum=sum+num;

    }printf("num%d=%d\n",i,num);
    avg=sum/10;
    printf("the sum of 10 number is %d\n",sum);
    printf("the average of 10 num is %f\n",avg);
}