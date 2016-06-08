#include<stdio.h>

int leastCommonMultiple(int a,int b)
{
	int max,min,c;
	if(a>b)
		max=a,min=b,c=b;
	else
		max=b,min=a,c=a;
	if(max%min==0)
		return min;
	else
	{
		while(c>=1)
		{
			if(max%c==0 && min%c==0)
				return c;
			c--;
		}
	}
}

int main()
{
	int a=15,b=3;
	int c=14,d=3;
	printf("[%d,%d]:%d\n",a,b,leastCommonMultiple(a,b));
	printf("[%d,%d]:%d\n",c,d,leastCommonMultiple(c,d));

	return 0;
}
