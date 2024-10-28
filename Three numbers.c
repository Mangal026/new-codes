//Code About which Number Aming the three is largest and which is smallest,to check odd even
#include<stdio.h>
int main(){
  int a,b,c;
printf("Enter:A,B,C:-->");
scanf("%d%d%d,&a,&b,&c");
  if(a>b && a>c){
printf("A is largest:%d",a);
     if(b>c){
        printf("C is least:%d",c);
            }
     else{
       printf("B is least:%d",b);
         }
}
else{
  if(b>c){
    printf("B is largest:%d",b);
      if(a>c){
      printf("C is least:%d",c);
         }
      else{
        printf("A is least:%d",a)
      }
  }
    else{
      printf("C is largest:%d",c);
      if(a>b){
        printf("B is least:%d",b);
      }
      else{
        printf("C is least:%d",c);
      }
    }
    
  }
