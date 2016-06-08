#include<stdio.h>
#include<assert.h>

int getIndex(const char *a,const char x)
{
	assert(a);
	int index;
	for(index=0;a[index]!='\0';++index)
	{
		if(a[index] == x)
			return index;
	}

	return -1;
}

int main()
{
	char *arr="abcdefg";
	char b='b';
	char c='c';
	char m='m';
	char x='x';
	printf("[ b? ]:%d\n",getIndex(arr,b));
	printf("[ c? ]:%d\n",getIndex(arr,c));
	printf("[ m? ]:%d\n",getIndex(arr,m));
	printf("[ x? ]:%d\n",getIndex(arr,x));

	return 0;
}
