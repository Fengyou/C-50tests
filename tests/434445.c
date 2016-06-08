#include<stdio.h>
#include<assert.h>

void *my_memcpy43(void *dst,void const *src,unsigned long len)
{
	assert(dst);
	assert(src);

	unsigned long i;
	if((unsigned long)dst%(sizeof(long))==0 && (unsigned long)src%(sizeof(long))==0 && len%(sizeof(long))==0)
	{
		long *d=(long*)dst;
		const long *s=(long*)src;
		for(i=0;i<len/(sizeof(long));++i)
			d[i]=s[i];
	}
	else
	{
		char *d=(char*)dst;
		const char *s=(char*)src;
		for(i=0;i<len;++i)
			d[i]=s[i];
		d[i]='\0';
	}
	return dst;
}
void *my_memmove44(void *dst,void const *src,size_t len)
{
	assert(dst);
	assert(src);
	char *dst_t;
	char *src_t;
	size_t n=len;
	
	if((unsigned char*)dst<=(unsigned char*)src || (unsigned char*)dst>((unsigned char*)src+n))
	{
		dst_t=(char *)dst;
		src_t=(char *)src;
		while(n--)
		{
			*dst_t = *src_t;
			++dst_t;
			++src_t;
		}
		*dst_t++='\0';
	}
	else
	{
		dst_t=(char *)dst+len-1;
		src_t=(char *)src+len-1;
		while(n--)
			{
				*dst_t = *src_t;
				--dst_t;
				--src_t;
			}
		*(dst_t+len+1)='\0';
	}
	return dst;
}
void *my_memset45(void *dst,const char x,size_t n)
{
	assert(dst);

	int i=0;
	for(;i<n;++i)
		*((char *)dst+i)=x;
	return dst;
}

int main()
{
	char dst1[3]={'\0'};
	char *src1="abcdefg";
	char dst2[3]={'\0'};
	char *src2="abcdefg";
	char x='x';
	printf("[memcpy(dst1)]:%s\n",my_memcpy43(dst1,src1,5));
	printf("[memmove(dst2)]:%s\n",my_memmove44(dst2,src2,4));
	printf("[memset(dst1)]:%s\n",my_memset45(dst1,x,2));

	return 0;
}
