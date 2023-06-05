//wrap  ladder if else
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter three values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is max");
	}
	else if(b>c&&b>a)
	{
		printf("b is max");
	}
	else
	{
		printf("c is max");
	}

	getch();

}