#include<stdio.h>
int main()
{
	int i , a, *p;
	p = &a;
	scanf("%d" , &a);
	for(i = 0; i<= 20; i++)
	{
		printf("%d\n" , i * *p);
	}
}
