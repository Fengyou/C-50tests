#include<stdio.h>

int maxOfTwo(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	printf("%d\n",maxOfTwo(19,21));

	return 0;
}
