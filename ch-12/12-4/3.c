#include<stdio.h>

main()
{
	int n1;
	printf("enter A's size :");
	scanf("%d",&n1);
	
	int i,a[n1];
	for(i = 0;i < n1;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);		
	}
	printf("the squares are :");
	for(i = 0;i < n1;i++)
	{
		printf("%d,",a[i] *a[i]);
		
	}
}
