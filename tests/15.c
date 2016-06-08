#include<stdio.h>

void Height(float begin,float rate)
{
	float sum=0;
	int n=10;
	float height=begin;
	while(n--)
	{
		sum=sum+height;
		height*=rate;
	}
	printf("sum:%f\n 10th:%f\n",sum,height);
}

int main()
{
	Height(100,0.5);

	return 0;
}
