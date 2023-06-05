//swap two variable using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,*p,*q;
	clrscr();
	printf("enter A=");
	scanf("%d",&a);
	printf("enter B=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	p=&a;
	q=&b;
	printf("\nA=%d",*p);
	printf("\nB=%d",*q);
	getch();
}