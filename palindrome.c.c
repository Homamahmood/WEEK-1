#include<stdio.h>
int main()
{
	int n,r, rev=0;
	printf("enter the number");
scanf("%d" ,&n);
int orig=n;
while(n>0){
r=n%10;
rev=rev*10+r;
n=n/10;	
}
if(orig==rev)
printf("%d is palindrome ",orig);
else
printf("%d is not palindrome ",orig);
return 0;

}
