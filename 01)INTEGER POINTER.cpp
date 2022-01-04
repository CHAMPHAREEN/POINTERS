//INTEGER POINTER
#include<stdio.h>
main()
{
	int a,*p;
	p=&a;
	printf("USING ADDRESS:%d",&a);
	printf("\nUSING POINTER:%d",p);
	printf("\nUSING POINTER[HEXADECIMAL]:%p",p);
	printf("\n size of a:%d\n size of pointer:%d",sizeof(a),sizeof(p));
}
