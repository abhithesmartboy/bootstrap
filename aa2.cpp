//Reverse a number 
#include<stdio.h>
main(){
	int num,rev=0,d,n;
	printf("Enter the number: ");
	scanf("%d",&num);
	//revers the number
	while(num>0){
		d=num%10;
		rev=rev*10+d;
		num=num/10;
	} 
	printf("Reversed number: %d",rev);		
	
	
}
