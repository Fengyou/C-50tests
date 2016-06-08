#include<stdio.h>

void prime()
{
	int i=2;
	for(;i<100;++i)
	{
		int j=2;
		while(j<=(i/2))
			if(i%j)
				++j;
			else
				break;
		if(j>i/2)
			printf("%d\t",i);
	}
	printf("\n");
}

int main()
{
	prime();

	return 0;
}
