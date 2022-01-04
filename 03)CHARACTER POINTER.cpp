//CHARACTER POINTER
#include<stdio.h>
main()
{
	char c,*f;
	f=&c;
	printf("USING ADDRESS:%d",&c);
	printf("\nUSING POINTER:%d",f);
	printf("\nUSING POINTER[HEXADECIMAL]:%p",f);
	printf("\n size of c:%d\n size of pointer:%d",sizeof(c),sizeof(f));
}
