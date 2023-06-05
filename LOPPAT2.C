#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=3;i++)
	{
		for(j=5;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();

}