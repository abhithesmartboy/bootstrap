#include<stdio.h>
main(){
	int a=10,b=10;
	int *p1=&a,*p2=&b;
	printf("%d",*p1+*p2);
}
