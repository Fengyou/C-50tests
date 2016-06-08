#include<stdio.h>

int PrevPost(int x)
{
	int tmp=x;
	int y,z=0;
	while(tmp>0)
	{
		y=tmp%10;
		z=z*10+y;
		tmp=tmp/10;
	}
	if(z == x)
		return 1;
	else
		return -1;
}

int main()
{
	int a=12321,b=1221,c=1234;
	printf("[%d]:%d\n",a,PrevPost(a));
	printf("[%d]:%d\n",b,PrevPost(b));
	printf("[%d]:%d\n",c,PrevPost(c));

	return 0;
}

