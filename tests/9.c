#include<stdio.h>

int main()
{
	int a=5,b=10;
//	int tmp=a;
//	a=b;
//	b=tmp;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a:%d\n",a);
	printf("b:%d\n",b);

	return 0;
}
