#include<stdio.h>
int main()
{
	char ch;
	printf("enter character \n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='E'||ch=='O')
	{
		printf("vowel");
	}
		else {
			printf("consonant");
		}
	
	return 0;
}
