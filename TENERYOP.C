//wrap tereny
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("enter three values");
	scanf("%d%d%d",&n1,&n2,&n3);
	(n1>n2)?(n1>n3)?printf("n1 is big"):printf("n2 is big"):(n2>n3)?printf("n2 is big"):printf("n3 is big");
	getch();

}