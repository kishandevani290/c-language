//union normal
#include<stdio.h>
#include<conio.h>
union name
{
	int a;
};
void main()
{
	clrscr();
	union name s,s1;
	s.a=10;
	printf("\n%d",s.a);
	s1.a=20;
	printf("\n%d",s1.a);
	printf("\n%d",s.a);
	getch();
}