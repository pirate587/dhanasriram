#include<stdio.h>
int main()
{
	int i,j,rows;
	printf(" enter rows\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
