#include<stdio.h>
#include<conio.h>
main()
{
	float c=38;
	float a=1.8;
	float b=36;

	clrscr();

	printf("enter the temperture in celcius:");
	scanf("%f",&c);
	printf("\n enter the temperture in fahrenheit:%.2f",(c*a)+b);

     getch();
}
