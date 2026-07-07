#include<stdio.h>
main(){
	int i,n,fact=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("Factorail of a number : %d\n",fact);
}
