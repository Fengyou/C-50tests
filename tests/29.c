#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void SelectSort(int *a,size_t n)
{
	assert(a);
	int minIndex, maxIndex;
	int begin=0;
	int end=n-1;
	while(begin<end)
	{
		int i=begin;
		maxIndex=begin;
		minIndex=end;
		for(;i<end;i++)
		{
			if(begin<end && a[minIndex]>a[i])
				minIndex=i;
			if(begin<end && a[maxIndex]<a[i])
				maxIndex=i;
		}
		swap(&a[minIndex],&a[begin]);
		if(maxIndex==begin)
			maxIndex=minIndex;
		swap(&a[maxIndex],&a[end]);

		++begin;
		--end;
	}
}
void Print(int *a,size_t n)
{
	assert(a);
	int i=0;
	for(;i<n;++i)
		printf("%d\t",a[i]);
	printf("\n");
}

int main()
{
	int a[]={1,8,3,9,2,7,5,4,8,0,6};
	int b[]={9,5,7,2,3,4,8,6,1,0,0};
	SelectSort(a,11);
	SelectSort(b,11);

	Print(a,11);
	Print(b,11);
	
	
	return;
}
