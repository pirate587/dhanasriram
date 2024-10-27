#include<stdio.h>
int main()
{
	int i,j,k,rows;
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(j=rows-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
