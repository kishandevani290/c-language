//structure normal and simple
#include<stdio.h>
#include<conio.h>
struct name
{
	int id;
};
void main()
{
	clrscr();
	struct name j;
	j.id=10;
	printf("%d",j.id);
	getch();
}