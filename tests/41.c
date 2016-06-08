#include<stdio.h>
#include<assert.h>

void my_strcat(char dst[],const char *src)
{
	assert(src);
	assert(dst);
	int i;
	int count=0;
	while(*dst != '\0')
		++dst;
	while(*src != '\0')		
		*(dst++)=*(src++);
	*dst='\0';
}

int main()
{
	char dst[]="xyz";
	char *src="abcdefg";
	my_strcat(dst,src);
	printf("dst:%s\n",dst);

	return 0;
}


