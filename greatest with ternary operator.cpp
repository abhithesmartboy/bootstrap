//find the greatest number among three numbers using ternary operator
#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter Second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	(a>b)?(b>c)?printf("%d",a):printf("%d",c):(b>c)?printf("%d",b):printf("%d",c);
}

