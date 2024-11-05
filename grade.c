//Switch cases
#include<stdio.h>
int main(){
    char G;
    printf("Enter Your Grade:");
    scanf("%c",&G);
    switch(G){
        case 'A':
           printf("Perfect!");
           break;
        case 'B':
           printf("Well done!");
           break;
        case 'C':
           printf("You did good!");   
           break;
        case 'D':
           printf("Atleast You are not fail!");
           break;
        case 'F':
           printf("You have failed!");
           break;
        default:
           printf("Invalid Grade");
    } return 0;
 }
