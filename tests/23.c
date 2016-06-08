#include<stdio.h>

void BubbleSort(int *a,size_t n)
{
	int i=0,j;
	for(;i<n-1;++i)
	{
		for(j=0;j<n-1-i;++j)
		{
			if(a[j]>a[j+1])
			{
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
void Print(int *a,size_t n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

int main()
{
  int a[]={1,8,3,9,2,7,6,5,4,0,};
  BubbleSort(a,10);
  Print(a,10);

  return 0;
}
