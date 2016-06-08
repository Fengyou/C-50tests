#include<stdio.h>
#include<assert.h>

void my_strcpy(char dst[],const char *src)
{
	assert(dst);
	assert(src);
	int i=0;
	while(dst[i]!='\0' && src[i]!='\0')
	{
		dst[i]=src[i];
		++i;
	}
	dst[i]='\0';
}

int main()
{
	char dst[5]="xyz";
	char *src="abcdefg";
	my_strcpy(dst,src);


	printf("dst:%s\n",dst);

	return 0;
}
