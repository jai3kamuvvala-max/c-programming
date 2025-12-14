#include<stdio.h>
int main ()
{
	int a,b,c,d;
	printf(" enter a,b,c,d values");
	scanf("%d%d%d%d, &a,&b,&c,&d");
	if (a<b && a<c && a<d)
	printf("a is smaller");
	else if(b<c && b<d)
	printf("b is smaller");
	else if (c<d)
	printf("c is smaller");
	else 
	printf("d is smaller");
	return 0 ;
}
