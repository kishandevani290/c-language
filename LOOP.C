#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,count;
	clrscr();
	printf("enter your number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;

	}
	getch();


}