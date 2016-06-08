#include<stdio.h>

int CountOf1(int n)
{
	int count=0;
	while(n)
	{
		if(n%2==1)
			count++;
		n=n>>1;
	}
	return count;
}

int main()
{
	int x=5,y=1;
	printf("[%d]:%d\n",x,CountOf1(x));
	printf("[%d]:%d\n",y,CountOf1(y));

	return 0;
}
