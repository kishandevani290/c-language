//result with structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct result
{
	int id,s1,s2,s3,s4,s5,total;
	char name[20];
	float avg;
};
void main()
{
	clrscr();
	struct result s;
	printf("enter your name and id");
	scanf("\n%s\n%d",&s.name,&s.id);
	printf("your name is%s\nyour id is%d",s.name,s.id);
	printf("\nenter your 5 subject marks:");
	scanf("\n%d\n%d\n%d\n%d\n%d",&s.s1,&s.s2,&s.s3,&s.s4,&s.s5);
	s.total=s.s1+s.s2+s.s3+s.s4+s.s5;
	s.avg=s.total/5;
	printf("\n your perstag %f",s.avg);
	printf("\nyour total %d",s.total);
	getch();
}