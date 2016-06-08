#include<stdio.h>

int Sum(int a,int n)
{
	int s=0;
	int sum=0;
	while(n--)
	{
		s=10*s+a;
		sum+=s;
	}
	return sum;
}

int main()
{
	int a,n;
	scanf("%d,%d",&a,&n);
	printf("%d\n",Sum(a,n));

	return 0;
}
