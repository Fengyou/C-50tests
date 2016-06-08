#include<stdio.h>

void swap(int *x,int *y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}


int main()
{
	int a=5,b=10;
	swap(&a,&b);
	printf("a:%d\t b:%d\n",a,b);

	return 0;
}
