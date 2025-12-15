#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("filewrite.TXT","w");
	while(i<20)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
}
