#include<stdio.h>
main()
{
	
	char s[100];
	char i,n,c=0;
	
	printf("Enter the String=");
	gets(s);
	n=strlen(s);
	
	for(i=0; i<2; i++)
	{
	if(s[i]==s[n-i-1])
	c++;
	}
	if(c==i)
	{
		printf("String is Palindrome");
	}
	else
	{
		printf("string is Not Palindrome");		
	}

}