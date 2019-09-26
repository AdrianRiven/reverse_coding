#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isvowel(char a)
{
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		return 1;
	else 
		return -1;
}
int main()
{
	char str[1000];
	scanf("%s",str);
	int j=strlen(str);
	int count=1;
	for(int i=1; i<j;i++)
		if(isvowel(str[i])*isvowel(str[i-1])==-1)
			count+=1;
	printf("%d\n",count);
	return 0;
}
