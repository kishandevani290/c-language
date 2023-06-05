//id program in static
#include<stdio.h>
#include<conio.h>
struct name
{
	int id;
};
void main()
{
	clrscr();
	struct name s;
	s.id= 100;
	printf("%d",s.id);
	getch();

}