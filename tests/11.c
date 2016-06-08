#include<stdio.h>

int Count()
{
	int count=0;
	int i,j,k;
	int s;
	for(i=1;i<=4;++i)
	{
		for(j=1;j<=4;++j)
		{
			for(k=1;k<=4;++k)
			{
				s=i*100+j*10+k;
				if(i!=j && j!=k && i!=k)
				{	
					printf("%d\t",s);
					count++;
				}
			}
		}		
	}
	return count;
}

int main()
{
	printf("count:%d\n",Count());

	return 0;
}
