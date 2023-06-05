//chain pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p,**q;
	clrscr();
	printf("enter number:");
	scanf("%d",&a);
	p=&a;
	q=&p;
	++(**q);
	printf("you enter values:%d",**q);
	getch();

}