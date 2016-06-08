#include<stdio.h>

int CountLeap()
{
	int i=1970;
	int count=0;
	for(;i<=2000;++i)
	{
		if((i%4==0&&i%100!=0) || (i%400==0))
		{
			printf("%d\t",i);
			++count;
		}
	}
	printf("\n");
	return count;
}

int main()
{
	printf("count:%d\n",CountLeap());

	return 0;
}

