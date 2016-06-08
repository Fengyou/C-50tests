#include<stdio.h>
#include<string.h>

int PrevPost(char *a)
{
	int i=strlen(a)-1;
	char b[i+1];
	int j=0;
	while(i>=0)
	{
		b[j++]=a[i--];
	}
	b[j]='\0';
	if(!strcmp(a,b))
		return 1;
	else
		return -1;
}

int main()
{
	char *a="abcdcba";
	char *b="abcddcba";
	char *c="abcdefg";
	printf("[%s]:%d\n",a,PrevPost(a));
	printf("[%s]:%d\n",b,PrevPost(b));
	printf("[%s]:%d\n",c,PrevPost(c));

	return 0;
}
