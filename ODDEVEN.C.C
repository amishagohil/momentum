#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int n;

	printf("enter the number=");
	scanf("%d",&n);

	(n % 2== 0)?printf("even number",n):printf("odd number",n);

	getch();
}
