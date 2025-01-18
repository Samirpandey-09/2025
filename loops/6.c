/*Write a C program that prompts the user to input a username. Use a while loop to keep asking for a username until a valid one is entered 
(e.g., at least 8 characters long).*/
#include<stdio.h>
#include<string.h>
int main (){
    char validusername[]= "samir";
    char username[90];

    while(1){
        printf("enter the username\n");
        scanf("%s",&username);
        if(strcmp(username,validusername)==0){
            printf("valid username");
            break;
        }
        else {
            printf("error\n");

    }
}
}