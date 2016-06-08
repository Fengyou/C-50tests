#include<stdio.h>

int CountOf9()
{
	int count=0;
	int i=0;
	for(;i<=100;++i)
	{
		if(i%10==9 || i/9==10 )
			count++;
	}
	return count+1;                      //99
}

int main()
{
	printf("CountOf9:%d\n",CountOf9());

	return 0;
}
