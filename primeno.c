#include<stdio.h>
int main()
{
	int a,b,c,i,j;
	printf("enter range of no: ");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		if(i<=1)
		continue;
		c=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0)
			c=0;
			break;
		}
		if(c==1)
		printf("%d",i);
		
	}
	
	
	
	
	return 0;
}
