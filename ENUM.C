//enumerition
#include<stdio.h>
#include<conio.h>
enum day{mon=1,tue,wed,thur,fri,sat,sun};
void main()
{
	enum day d;
	clrscr();
	d=fri;
	printf("%d",d);
	getch();
}