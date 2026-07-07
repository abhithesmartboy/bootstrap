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
	printf("Enter a mtrix of B:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&B[i][j]);
		}
		
	}
	//chexcking if matrices  are equal
	if(are_matrices_equal(A[i][j],B[i][j])) {
		printf("The matrices are equal.\n");
	}
	else{
		printf("The matrices are not equal.\n");
	}
		
}
