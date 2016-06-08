#include<stdio.h>
#include<assert.h>

float my_atof(char *arr)
{
	assert(arr);
	int a=1,j=0;
	float ret=0;
	while(*arr != '\0')
	{
		j*=10;
		if(*arr=='-')
			a=-1;
		if(*arr=='.')
			j=1;
		if(*arr>='0' && *arr<='9')
			ret=ret*10+(*arr-'0');
		if(*arr==' ')
			j=j/10;
		++arr;
	}
	return (ret*a)/j;
}

int main()
{
	char *a="-12.3   4";
	printf("%f\n",my_atof(a));

	return 0;
}
