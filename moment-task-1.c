#include<stdio.h>
void main()
{
	char ch;
	printf("Enter character= ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<'z' || ch>='A' && ch<='Z')
	{
		printf("%c is Alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is Numerical",ch);
	}
	else
	{
		printf("%c is Special character");
	}
}