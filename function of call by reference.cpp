#include<stdio.h>
int fun(int *x){
	*x = 9;
	printf("%d \n",*x);
	return 1;
}
main(){
	int a=0;
	fun(&a);
	printf("%d",a);
}
