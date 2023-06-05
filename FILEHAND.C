//create file in file handling
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p;
	char ch;
	clrscr();

	p=fopen("demo.txt","o");

	while((ch=getchar())!='.')
	{
		putc(ch,p);
	}
	fclose(p);
	getch();
}