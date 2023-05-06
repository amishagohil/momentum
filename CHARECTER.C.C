#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char ch;
	printf("enter charecter =");
	scanf("%c",&ch);

	if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
	{
	    printf("charcter is alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
	    printf("charcter is number");
	}
	else
	{
	    printf("charcter is special character");
	}
	getch();
}