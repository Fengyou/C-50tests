#include<stdio.h>

int Fib25(size_t n)
{
	if(n<=2)
		return 1;
	else
		return Fib25(n-1)+Fib25(n-2);
}

int Fib26(size_t n)
{
	if(n<=2)
		return 1;
	else
	{
		int i=3;
		int left=1;
		int right=1;
		int cur;
		for(;i<=n;++i)
		{
			cur=left+right;
			left=right;
			right=cur;
		}
		return cur;
	}
}

int main()
{
	printf("%d\n",Fib25(5));
	printf("%d\n",Fib25(10));
	printf("%d\n",Fib26(5));
	printf("%d\n",Fib26(10));

	return 0;
}
