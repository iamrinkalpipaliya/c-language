#include<stdio.h>
#include<string.h>
main()
{
	int n,s;
	
	printf("Enter The Student Name:");
	scanf("%d",&n);
	printf("Enter The subject Name:");
	scanf("%d",&s);
	
	
	char names[n][50];
	fflush(stdin);
	
	for(i=0;i<n;i++)
	{
		printf("Enetr Name %d:",i+1);
		gets(names[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(strcmp(names[i],name[i]==1))
			{
				strcpy(tmp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],tmp);
			}
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d) Name :%s\n",i+1,names[i]);	
	}
	
	
	
}
