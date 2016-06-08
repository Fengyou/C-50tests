#include<stdio.h>
#include<assert.h>
#include<string.h>

void swap(char *x,char *y)
{
	char tmp=*x;
	*x=*y;
	*y=tmp;
}
//student a am i ----->    i am a student
void Exchange(char a[])
{
	int len=strlen(a);
	int begin=0;
	int end=len-1;

	while(begin<end)
	{
		swap(&a[begin++],&a[end--]);
	}

	int i=0,k=0;
	for(;i<=len;++i)
	{
		if(a[i]==' ' || a[i]=='\0')
		{
			int j=i-1;
			while(k<j)
			{
				swap(&a[k++],&a[j--]);
			}
			k=i+1;
		}
	}
}

int main()
{
	char arr[]="student a am i";
	printf("before:%s\n",arr);
	Exchange(arr);
	printf("after:%s\n",arr);

	return 0;
}
