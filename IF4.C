//wrap 4variables
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter four values:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is max");
			}
			else
			{
				printf("d is max");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is max");
			}
			else
			{
				printf("d is max");
			}

		}

	}
	getch();

}