#include<stdio.h>
#include<assert.h>

void my_toUpper(char a[])
{
	assert(a);
	int i=0;
	while(a[i] != '\0')
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]=a[i]+32;
		++i;
	}
}

int main()
{
//	char arr[]={'A','B','C','d','e','f','G'};
	char arr[]="ABCdefG";	 
	printf("before:%s\n",arr);
	my_toUpper(arr);
	printf("after:%s\n",arr);

	return 0;
}
