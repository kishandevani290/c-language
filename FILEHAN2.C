//read file handleing
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p;
	char ch;
	clrscr();
	p=fopen("kishan.txt","r");
	while((ch=getc(p))!=EOF)
	{
		printf("%c",ch);
	}

	getch();

}