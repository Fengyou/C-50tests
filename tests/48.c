#include<stdio.h>
#include<stdarg.h>

float getAverage(int n,...)
{
	va_list arg;
	int i=0;
	float sum=0;
	va_start(arg,n);                           //init
	for(;i<n;++i)
	{
		sum+=va_arg(arg,int);                 //read
	}
	va_end(arg);                              //close
	printf("n:%d\n",n);
	return (float)sum/n;
}

int main()
{

	printf("Average:%f\n",getAverage(5,1,2,3,4,5));
	return 0;
}

