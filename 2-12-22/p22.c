#include<stdio.h>
main()
{
	int i,j,count=65;
	
	for(i=65;i<=69;i++)
	{
		for(j=i;j>=65;j--)
		{
			printf("%c",count);
			count++;
		}
		printf("\n");
	}
	
}
