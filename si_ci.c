#include<stdio.h>
#include<math.h>
int main(){
	int p,r,t;
	int si,ci;
	printf("enter p,r,t");
	scanf("%d%d%d", &p,&r,&t);
	si =(p*r*t)/100;
	printf("simple interest = %d \n", si);
	ci = pow((p*(1+r)/100),t);
	printf("compoundd interest = %d" ,ci);
	return 0;
}

