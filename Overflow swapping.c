#include <stdio.h>

int main()
{
 //swapping using overflow
 int a,b;
 printf("Enter:A,B:-");
 scanf("%d %d",&a,&b);
 a=a+b;//We do this to use common value if a+b
 b=a-b;//a is assigned to b i.e b=a the value of a still remains a+b
 a=a-b;//a+b-a(b=a) b is assigned to a ;also the previous a+b value isn't change because stored in a
 printf("A:%d\n B:%d",a,b);

    return 0;
}
