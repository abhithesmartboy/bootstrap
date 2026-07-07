#include<stdio.h>
int fun(int n){
	if(n==10){
		return n;
	}
	printf("%d",n);
	fun(n+1);
}
main(){
	int a=1;
	int c=fun(a);
	printf("%d",c);
}
