#include<stdio.h>

int Getlen27(char *a)
{
	int count=0;
	int i=0;
	while(a[i++]!='\0')
		count++;
	return count;
}
int Getlen28(char *a)
{
	if(*a=='\0')
		return 0;
	else
		return 1+Getlen28(++a);
}

int main()
{
	char *a="abcdefg";
	printf("count:%d\n",Getlen27(a));
	printf("noCount:%d\n",Getlen28(a));

	return 0;
}


