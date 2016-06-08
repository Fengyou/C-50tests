#include<stdio.h>
#include<assert.h>

int maxOfTen(int *a)
{
	assert(a);
	int i=0;
	int max=a[0];
	for(;a[i]!='\0';++i)
		if(max<a[i])
			max=a[i];

	return max;
}

int main()
{
	int a[]={2,5,3,1,6,8,4,9,0,7};
	printf("%d\n",maxOfTen(a));

	return 0;
}
