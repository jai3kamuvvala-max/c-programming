#include<stdio.h>
int main ()
{ 
int a,b,c ;
printf("enter a , b,c values ");
scanf(" %d%d%d", &a,&b,&c);
(a>b && b>c)?(b>a && b>c)?printf("a is max"):printf("b is max"):printf("c is max");
return 0;
}
