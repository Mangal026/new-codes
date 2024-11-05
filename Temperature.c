// Temperature calculator
#include<stdio.h>
#include<ctype.h>
int main(){
   char unit;
   float temp;
  
   printf("Is Your Temp F or C? :\n");
     scanf("%c",&unit);
      unit=toupper(unit);
   if(unit=='C'){
       printf("\nEnter Your Temp In Celcius:");
        scanf("%f",&temp);
       temp=(temp*9/5)+32;
       printf("\nYour temperature in F:%.2f farenhiet",temp);
   }
   else if(unit=='F'){
       printf("\nEnter Your temp in Farenhiet:");
       scanf("%f",&temp);
       temp=((temp-32)*5)/9;
        printf("\nYour temperature in C:%.2f celcius",temp);
   }
   else{
       printf("\nYou have not enterd valid unit %c for measurement",unit);
   }
    return 0;
 }
