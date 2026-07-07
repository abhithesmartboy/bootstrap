#include<stdio.h>
main(){
	int a,j,i;
	printf("Enter the number of rows:");
	scanf("%d",&a);
	for(i=a;i>0;i--){
		for(j=1;j<=i;j++){
			printf("# ");
		}
		printf("\n");
	}
}

