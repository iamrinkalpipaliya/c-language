#include<stdio.h>
#include<conio.h>

main()
{

	int p=65;
	int q=45;
	int r=180;
	clrscr();

	printf("enter your p:");
	scanf("%d",&p);
	printf("enter your q:");
	scanf("%d",&q);

	printf("enter your r:%d",r-(p+q));

	getch();
}
