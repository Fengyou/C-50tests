#include<stdio.h>

void Reverse(int a[],size_t n)
{
	int begin=0;
	int end=n-1;

	while(begin<end)
	{
		int tmp=a[begin];
		a[begin]=a[end];
		a[end]=tmp;
		begin++;
		end--;
	}
}

void Print(int a[],size_t n)
{
	int i=0;
	for(;i<n;++i)
		printf("%d\t",a[i]);
	printf("\n");
}

int main()
{
	int a[]={1,2,3,4,5};
	Reverse(a,5);
	Print(a,5);

	return 0;
}
