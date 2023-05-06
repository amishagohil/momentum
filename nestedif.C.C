#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,d;
	printf("the number A =");
	scanf("%d",&a);
	printf("the number B =");
	scanf("%d",&b);
	printf("the number C =");
	scanf("%d",&c);
	printf("the number D =");
	scanf("%d",&d);

	if(a>b)
	{
	     if(a>c)
	     {
		    if(a>d)
		    {  
		 	    printf("A is maximum");
		    }
		    else
		    {
		        printf("D is maximum");
		    }
	     }
	     else
	     {
		     printf("C is maximum");
	     }
	}
	else
	{
	     if(b>c)
	     {
		    if(b>d)
		    {
		         printf("B is maximum");
		    }
		    else
		    {
		         printf("D1 is maximum");
		    }
	     }

	}
	
}
