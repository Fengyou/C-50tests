#include<stdio.h>

int SumFactorial(int n)
{
	int i=1,j=1,tmp=1;
	int sum=0;
	for(;i<=n;++i)
	{
		for(;j<=i;++j)
			tmp=tmp*j;
		sum+=tmp;
	}
	return sum;
}

int main()
{
	int a=2,b=5,c=20;
	printf("[%d!+]:%d\n",a,SumFactorial(a));
	printf("[%d!+]:%d\n",b,SumFactorial(b));
	printf("[%d!+]:%d\n",c,SumFactorial(c));

	return 0;
}
