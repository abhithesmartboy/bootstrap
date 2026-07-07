
#include<stdio.h>
main(){
	int s,e,i,j,c;
	printf("Enter first number:");
	scanf("%d",&s);
	printf("Enter second number:");
	scanf("%d",&e);
	for (i=s;i<=e;i++){
		for(j=i;j>0;j++){
			c=c+1;
		}
	}
	printf("%d is prime number : %d\n",i);
}
