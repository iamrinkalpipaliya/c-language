#include<stdio.h>
#include<conio.h>

main()
{
      int a,n;
      clrscr();
      printf("enter  year1:");
      scanf("%d",&a);
      printf("enter year2:");
      scanf("%d",&n);

      while(a<=n)
      {
	if(a%4==0 )
	{
		printf("%d\t",a);

	}
	  a++;
      }



     getch();

}
