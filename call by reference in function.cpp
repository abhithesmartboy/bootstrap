#include<stdio.h>
int fun(int *a,int *b){
	*a=10;
	printf("%d \n",*a+*b);
}
main(){
	int x=5,y=6;
	fun(&x,&y);
	printf("%d \n",x);
}
