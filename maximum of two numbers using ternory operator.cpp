#include<stdio.h>

main() {
int a,b,max;
printf("Enter two numbers: ");
scanf("%d%d", &a,&b);
max=(a>b)?a:b;
printf("The maximum of %d and %d is : %d\n", a, b, max);
}


