#include<stdio.h>
#include<assert.h>
#include<string.h>

int substr(char dst[],char src[],int start,int len)
{
	assert(dst);
	assert(src);
	if(strlen(src)<start)
		return -1;
	int count=0;
	for(;count<len && src[start+count]!='\0';count++)
		dst[count]=src[start+count];
	dst[count]='\0';

	return count;
}
//void Print(char *a)
//{
//	while(*a!='\0')
//	{
//		printf("%c",*a);
//		++a;
//	}
//	printf("\n");
//}

int main()
{
	char dst1[10];
	char dst2[10];
	char src[]="abcdefghijk";
	printf("%d\n",substr(dst1,src,7,5));
//	Print(dst1);
	printf("dst1:%s\n",dst1);
	printf("%d\n",substr(dst2,src,7,3));
//	Print(dst2);
	printf("dst2:%s\n",dst2);

	return 0;
}
