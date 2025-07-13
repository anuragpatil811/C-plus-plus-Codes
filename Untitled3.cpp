#include<stdio.h>
void div();
int main()
{
	div();
	
}
void div()
{
	int fact = 1, i, number;
	printf("Enter the number:");
	scanf("%d" , &number);
	for(i = 1; i<=number; i++)
	{
		fact = fact * i;
	}
	printf("%d" , fact);
}
