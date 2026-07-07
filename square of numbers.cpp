#include<stdio.h>
main(){
	int a,b,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&a);
	printf("Enter number of column: ");
	scanf("%d",&b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	
}
