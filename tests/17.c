#include<stdio.h>

float Sum()
{
	float sub=1,mum=1;
	float sum=0;
	int flag=1;
	while(mum<=100)
	{
		float s=flag*(sub/mum);
		sum+=s;
		mum++;
		flag*=(-1);
	}
	return sum;
}

int main()
{
	printf("sum:%f\n",Sum());

	return 0;
}
