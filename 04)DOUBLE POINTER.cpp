//DOUBLE POINTER
#include<stdio.h>
main()
{
	double d,*c;
	c=&d;
	printf("USING ADDRESS:%d",&d);
	printf("\nUSING POINTER:%d",c);
	printf("\nUSING POINTER[HEXADECIMAL]:%p",c);
	printf("\n size of d:%d\n size of pointer:%d",sizeof(d),sizeof(c));
}
