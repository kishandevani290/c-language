//print your charter using pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20],*p;
	clrscr();
	printf("enter the data:");
	scanf("%s",&a);
	p=a;
	printf("you enter data:%s",a);
	getch();
}