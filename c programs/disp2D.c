#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("enter row and column size");
	scanf("%d%d",&r,&c);
	printf("enter row and column values");
	for(i=0;i<n;i++)
	{
		for("j=0;j<n;j++")
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("display 2D array values");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",&a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
