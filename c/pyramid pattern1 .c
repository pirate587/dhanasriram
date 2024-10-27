#include<stdio.h>
int main()
{
int i,j,rows,k;
printf("enter the no of rows");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
	for(j=rows-1;j>=i;j--)
	{
	printf(" ");	
	}
for(k=i;k>=1;k--)
{
	printf("%d ",k);
}
printf("\n");
	}	
	return 0;
}
