#include<stdio.h>

int getsub()
{
	int a;
		
	printf("Enter The Subject:");
	scanf("%d",&a);	
	printf("Account:");
	scanf("%d",&a);	
	printf("Stat:");
	scanf("%d",&a);	
	printf("English:");
	scanf("%d",&a);	
	printf("Gujarati:");
	scanf("%d",&a);	
	printf("Computer:");
	scanf("%d",&a);
	printf("Economics:");
	scanf("%d",&a);	
	printf("BA:");
	scanf("%d",&a);	
	
	total=a+a+a+a+a+a+a;
	per=(total/7.0);
	
	printf("The total marks is:%d",total);
	printf("\n\n The percentage is:%.2f",per);
	
	if(per>90 && per<100)
	{
		printf("\n\n")
	}
}
