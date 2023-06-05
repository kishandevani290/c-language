//file handle write program
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p;
	char ch;
	clrscr();
	p=fopen("demo2.txt","w");

	while((ch=getchar())!='.')
	{
		putc(ch,p);
	}
	getch();
}