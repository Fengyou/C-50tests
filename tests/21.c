#include<stdio.h>

#define N 3
int add(int a[N][N])
{
	int i=0,j=0;
	int sum=0;
	for(;i<N;++i)
	{
		sum+=a[i][i];
	}
	return sum;
}

int main()
{
	int a[3][3]={1,2,3,1,2,3,1,2,3};
	printf("sum:%d\n",add(a));

	return 0;
}

