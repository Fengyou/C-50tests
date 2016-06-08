#include<stdio.h>

int maxCommonDivisor(int x,int y)
{
	int max,min,c;
	if(x>y)
		max=x,min=y;
	else
		max=y,min=x;
	while(1)
	{
		if(max%min==0)
			return min;
		else
		{
			c=max%min;
			max=min;
			min=c;
		}
	}
}

int main()
{
	int a=2,b=10;
	int c=5,d=7;
	printf("(%d,%d):%d\n",a,b,maxCommonDivisor(a,b));
	printf("(%d,%d):%d\n",c,d,maxCommonDivisor(c,d));
}
