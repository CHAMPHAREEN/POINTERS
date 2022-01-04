//FLOAT POINTER
#include<stdio.h>
main()
{
	float b,*p;
	p=&b;
	printf("USING ADDRESS:%d",&b);
	printf("\nUSING POINTER:%d",p);
	printf("\nUSING POINTER[HEXADECIMAL]:%p",p);
	printf("\n size of b:%d\n size of pointer:%d",sizeof(b),sizeof(p));
}
