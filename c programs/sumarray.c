#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],i,r,c,j;
	printf("enter rows and columns sizes");
	scanf("%d%d",&r,&c);
	printf("enter A matix value");
	for(i=0;i<r;i++)
	{
		for("j=0;j<c;j++")
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter B matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d"&B[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			c[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("resultant matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
