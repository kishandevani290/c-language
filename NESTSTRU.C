//nested structer
#include<stdio.h>
#include<conio.h>
struct student
{
	int a;
};
struct student2
{
	int b;
	struct student d;
};
void main()
{
	struct student2 b;
	clrscr();
	b.d.a=10;
	printf("-->%d",b.d.a);
	getch();
}