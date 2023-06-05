//wrap 5 variables
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter 5 value:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("a is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}

		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("b is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}
		}
		if(c>d)
		{
			if(c>e)
			{
				printf("c is max");
			}
			else
			{
				printf("e is max");
			}
		}
		else
		{
			if(d>e)
			{
				printf("d is max");
			}
			else
			{
				printf("e is max");
			}
		}
	}
	getch();

}