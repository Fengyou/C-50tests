#include<stdio.h>
#include<string.h>
#include<assert.h>

void Reserve(char a[])
{
	assert(a);

	int len=strlen(a);
	int begin=0,end=len-1;
	while(begin<end)
	{
		char tmp=a[begin];
		a[begin]=a[end];
		a[end]=tmp;
		++begin;
		--end;
	}
}
void Print(char *a)
{
	assert(a);
	while(*a!='\0')
	{
		printf("%c",*a);
		++a;
	}
	printf("\n");
}

int main()
{
	char a[]="bit-tech";
	Print(a);
	Reserve(a);
	Print(a);

	return 0;
}
