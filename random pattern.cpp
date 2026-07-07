#include<stdio.h>
main(){
	int n=5,i,j,k,l;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(k=1;k>=i;k++){
		for(l=1;l<=i;l++)
		printf("# ");
	}
}
