#include<stdio.h>
int fact(int a){
	if(a<=1){
		return 1;
	}
	return a*fact(a-1);
}
main(){
	int n=9;
	int c=fact(n);
	printf("Factorial is : %d",c);
}
