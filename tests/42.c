#include<stdio.h>
#include<assert.h>

int my_strcmp(const char *arr,const char *brr)
{
	assert(arr);
	assert(brr);
	while(*arr!='\0' && *brr!='\0' )
	{
		if(*arr > *brr)
			return 1;
		else if(*arr < *brr)
			return -1;
		else
		{
			++arr;
			++brr;
		}
	}
	if(*arr == '\0' && *brr!='\0')
		return -1;
	else if(*brr == '\0' && *arr!='\0')
		return 1;
	else
		return 0;
}

int main()
{
	char *arr="abcdefg";
	char *brr="abcdefg";
	char *crr="abc";
	
	printf("[arr,brr]:%d\n",my_strcmp(arr,brr));
	printf("[brr,crr]:%d\n",my_strcmp(brr,crr));
	printf("[crr,brr]:%d\n",my_strcmp(crr,brr));

	return 0;

}
