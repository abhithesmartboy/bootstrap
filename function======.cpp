#include<stdio.h>
int add(int x,int y)//Here x and y are formal parameter
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mult(int x, int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
main(){
	int a,b,c;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	c=add(a,b);  //Here a and b are actual parameters
	printf("Sum= %d\n",c);
	c=sub(a,b);
	printf("Sub= %d\n",c);
	c=mult(a,b);
	printf("Mult= %d\n",c);
	c=div(a,b);
	printf("Div= %d\n",c);
}
