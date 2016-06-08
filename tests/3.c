#include<stdio.h>

void fun()
{
	int i=1,j;
	for(;i<=9;i++)
	{
		for(j=1;j<=i;++j)
			printf("%d*%d=%d\t",i,j,i*j);
		printf("\n");
	}
}

int main()
{
	fun();

	return 0;
}
