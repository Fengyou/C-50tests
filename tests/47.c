#include<stdio.h>

int bottle(int n)
{
	int sum=0;
	int mod;
	int div;
	while(n>1)
	{
		sum+=n;
		mod=n%2;
		div=n/2;
		n=div+mod;
	}
	return sum;
}

int main()
{
	printf("sumOfBubble:%d\n",bottle(20));

	return 0;
}
