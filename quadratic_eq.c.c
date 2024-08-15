#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 printf("enter coefficient of a,b,c\n");
 scanf("%d%d%d",&a,&b,&c);
 int root1,root2;
 int d=b*b-(4*a*c);
 if(d>0){
 	root1=(-b+sqrt(d))/(2*a);
 	printf("%d\n",root1);
 	root2=(-b-sqrt(d))/(2*a);
 	 	printf("%d",root2);

 }
 else if(d==0){
 	root1=(-b)/(2*a);
 	printf("%d",root1);
 }
 else{
 printf("roots are imaginary");
 }
 return 0;
}
