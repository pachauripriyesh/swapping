#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter first number:  ");
	scanf("%d",&num1);
	printf("enter second number");
	scanf("%d",&num2);
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	printf("\n after swapping :");
	printf("\nvalue of first number=%d",num1);
	printf("\nvalue of second number=%d",num2);
	return 0;
}
