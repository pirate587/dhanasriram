#include<stdio.h>
int main()
{
	int i,j,k,rows;
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
	for(j=rows-1;j>=i;j--)
	{
	printf(" ");	
	}
	for(k=1;k<=i;k++)
	{
		printf("%d ",k);
	}
	printf("\n");
}
}
