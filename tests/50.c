#include<stdio.h>

unsigned int reverse_bit(unsigned int value)
{
	unsigned int data=value;
	unsigned int ret=0;
	unsigned int tmp;
	int n=32;
	while(n--)
	{
		tmp = (data & 1);
		ret = (ret<<1) +tmp;
		data = (data>>1);
	}
	return ret;
}


int main()
{
	unsigned int x=25;
	printf("before:%u\n",x);
	reverse_bit(x);
	printf("after:%u\n",reverse_bit(x));

	return 0;
}
