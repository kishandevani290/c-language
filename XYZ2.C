//wrap (x-y-z)3
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,ans;
	clrscr();
	printf("enter three values=");
	scanf("%d%d%d",&x,&y,&z);
	ans=(x-y-z)*(x-y-z)*(x-y-z);
	printf("your anwer=%d",ans);
	getch();

}