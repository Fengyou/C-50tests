#include<stdio.h>
#include<string.h>

void swap(char *(a[]),char *(b[]))
{
	char *tmp=*a;
	*a=*b;
	*b=tmp;
}
void SortString(char *a[],size_t n)
{
	int i=0;
	int j;
	char *tmp=a[0];
	for(;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
			if(strcmp(a[j],a[j+1])>0)
				swap(&a[j],&a[j+1]);
	}
}
void Print(char *arr[],size_t n)
{
	int i=0;
	for(;i<n;++i)
		printf("%s\t",arr[i]);
}


int main()
{
	char *arr[]={"hello","bit-tech","word"};
	printf("before:");
	Print(arr,3);
	printf("\n");
	SortString(arr,3);
	printf("after:");
	Print(arr,3);
	printf("\n");

	return 0;
		
}


