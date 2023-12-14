
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k=11;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d\t",k++);
		}
		printf("\n");
	}
	getch();


}