//in structure printf with array with using charter data type and print your name
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct name
{
	char a[20];
};
void main()
{
	clrscr();
	struct name s;
	strcpy(s.a,"kishan devani");
	printf("%s",s.a);
	getch();

}