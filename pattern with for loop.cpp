#include<stdio.h>
main(){
	int i,j,n=4,k;
	for(i=1;i<=n;i++){
		for(k=n-i;k>0;k--){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
			printf("\n");
	}

}
