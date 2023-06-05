//wrap if else 4 variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter four values:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
		printf("a is max");
	}
	else if(b>c&&b>d&&b>a)
	{
		printf("b is max");
	}
	else if(c>a&&d>b&&d>c)
	{
		printf("d is max");
	}
	else
	{
		printf("c is max");
	}
	getch();

}