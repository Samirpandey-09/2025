/*Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop.
 Calculate and print the sum of all the positive integers entered.*/
 #include<stdio.h>
 int main(){
        int i=1,num,sum ;
        while(i>0){
            printf("enter the number-");
            scanf("%d",&num);
            sum+=num;
            i++;
            if(num==0){
                break;
            }
           
        } printf("sum of all entered no is - %d ",sum);

 }

