#include<stdio.h>

double sum()
{
	double sub=2,mum=1;
	double sum=0;
	int count=20;
	while(count--)
	{
		sum=sum+=(sub/mum);
		double tmp=sub;
		sub=sub+mum;
		mum=tmp;
	}
	return sum;
}

int main()
{
	printf("sum:%f\n",sum());

	return 0;
}
