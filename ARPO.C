//array in  pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,*p,i;
	clrscr();
	printf("enter N:");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&*(p+i));
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
	getch();

}