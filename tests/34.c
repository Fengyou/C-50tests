#include<stdio.h>

void intToInt(const int x)
{
	int a=x;
	if(a/10==0)
		printf("%d\t",a);
	else
	{
		intToInt(a/10);
		printf("%d\t",(a%10));
	}
}

int main()
{
	intToInt(1234);
	printf("\n");

	return 0;
}
