//Code About which Number Aming the three is largest and which is smallest,to check odd even
#include <stdio.h>

int main()
{
 int a,b,c;
 printf("Enter:");
 scanf("%d %d %d",&a,&b,&c);
 //larger number among A,B,C 
 if(a>b&&a>c){
     printf("A is largest:%d\n",a);
 }
 else if(b>c){
 printf("B is larges:%d\n",b);
     
 }
 else{
     printf("C is largest:%d\n",c);
 }
 //Smallest Among the three
 if(a<c&&a<b){
    printf("A is smallest:%d\n",a);
     }
 else if(b<c){
        printf("B is smallest:%d\n",b);
        
    }
    else { printf("C is smallest:%d\n",c);
    }
    return 0;
}
