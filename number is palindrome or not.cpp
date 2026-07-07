//WAP to 
#include<stdio.h>
main(){
int a,rev=0,d,temp;
printf("Enter digit: ");
scanf("%d",&a);
temp=a;
while(a>0){
	d=a%10;
	rev=rev*10+d;
	a=a/10;
}if(temp==rev){
	printf("Number is palindrome: ");
}
else{
	printf("Number is not palindrome:");
}
}
