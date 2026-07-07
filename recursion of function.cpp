#include<stdio.h>
int fun(){
	printf("Hello");
	fun();
}
main(){
	fun();
}
