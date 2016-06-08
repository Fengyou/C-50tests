#include<stdio.h>
#include<assert.h>

void Print(char *arr)
{
	assert(arr);
	while(*arr != '\0')
	{
		printf("%c",'a'+'Z'-*arr);
		++arr;
	}
	printf("\n");
}

int main()
{
	char *arr="abz";
	Print(arr);

	return 0;
}
