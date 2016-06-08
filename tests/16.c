#include<stdio.h>

int PeachSum()
{
	int n=10;
	int end=1;
	int sum=end;
	while(--n)
	{
		sum=(sum+1)*2;
	}
	return sum;
}

int main()
{
	printf("PeachSum:%d\n",PeachSum());

	return 0;
}
