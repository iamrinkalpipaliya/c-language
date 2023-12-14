#include<stdio.h>
#include<conio.h>
main()
{
	     int a=100;
	     float hra=0.1;
	     float da=0.05;
	     float ta=0.08;
	     clrscr();
	     printf("enter your base salary :");
	     scanf("%d",&a);
	     printf("your hra:%.2f\n",a*hra);
	     printf("your da:%.2f\n",a*da);
	     printf("your ta:%.2f\n",a*ta);

	     printf("addition of salary:%.2f\n",a+(100*0.1)+(100*0.05)+(100*0.08));

	     getch();







}
