//in nested structure sum two value
#include<stdio.h>
#include<conio.h>
struct sum
{
	int a;
};
struct sum1
{
	int b;
	struct sum s;
};
void main()
{
	int ans;
	struct sum1 s1;
	clrscr();
	printf("enter a value=");
	scanf("%d",&s1.s.a);
	printf("enter B value=");
	scanf("%d",&s1.b);
	ans=s1.s.a+s1.b;
	printf("your answer=%d",ans);
	getch();
}