//WAP to check given two matrixes are equal or not
#include<stdio.h>
main(){
	int A[3][3],B[3][3],i,j;
	printf("Enter a mtrix of A:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter a matrix of B:\n ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&B[i][j]);
		}
	}
	if((A[i][j]=B[i][j])){
		printf("Matrices are equal.\n");
	}
	else{
		printf("Matrics are not equal.\n");
	}
	
}
