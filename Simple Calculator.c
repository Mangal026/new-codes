
#include <stdio.h>
int Calc(char A,double num1, double num2) {
    double Result;//dec result here because i am using it within this fxn
	switch(A) {
	case '+':
		Result=num1+num2;
		printf("\nSum:%.2lf",Result);
		break;
	case '-':
		Result=num1-num2;
		printf("\nDiff:%.2lf",Result);
		break;
	case '*':
		Result=num1*num2;
		printf("\nProduct:%.2lf",Result);
		break;
	case '/':
		Result=num1/num2;
		printf("\nDivision:%.2lf",Result);
		break;
	default :
		printf("%c isn't a mathmatical operator",A);
	}
	return 0;
}

int main()
{
	char A;
	double num1,num2;
	printf("Enter the Operation You want to perform:+ - * /:");
	scanf(" %c",&A);
	printf("\nNum1:");
	scanf("%lf",&num1);
	printf("\nNum2:");
	scanf("%lf",&num2);
	Calc(A,num1,num2);


	return 0;
}