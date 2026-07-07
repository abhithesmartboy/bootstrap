//find factorial in range
#include<stdio.h>
main(){
	int f,i,j,s,e;
	printf("Enter starting number :");
	scanf("%d",&s);
	printf("Enter last number :");
	scanf("%d",&e);
	for(i=s;i<=e;i++){
		f=1;
		for(j=i;j>=1;j--){
			f=f*j;
		}
		printf("Factorial of %d is : %d\n",i,f);
	}
}
