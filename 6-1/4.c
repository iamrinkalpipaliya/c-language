#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("enter the number:");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
	getch();
}
