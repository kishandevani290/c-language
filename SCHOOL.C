//school struct
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int id,age,std;
	char name[20],course[20],city[20],school[20];
};
void main()
{
	struct student s;
	clrscr();
	printf("enter your id:");
	scanf("%d",s.id);
	printf("\nenter your name:");
	scanf("%s",s.name);
	printf("\nenter your age:");
	scanf("%d",s.age);
	printf("\nenter your course:");
	scanf("%s",s.course);
	printf("\nenter your city:");
	scanf("%s",s.city);
	printf("\nenter your std:");
	scanf("%d",s.std);
	printf("enter your school:");
	scanf("%s",s.school);
	getch();
}