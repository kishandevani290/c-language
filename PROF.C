//wrap profit and loss
#include<stdio.h>
#include<conio.h>
void main()
{
	int inc,exp;
	clrscr();
	printf("please enter your income=");
	scanf("%d",&inc);
	printf("please enter your expense=");
	scanf("%d",&exp);
	if(inc<exp)
	{
		printf("you are in loss");

	}
	else
	{
		printf("great you are in profit keep it up");
	}
	getch();


}