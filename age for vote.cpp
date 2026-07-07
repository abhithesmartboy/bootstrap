#include<stdio.h>
main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>=18){
		printf("Your are eligible for vote \n");
	}
	else{
		printf("You are not eligible for vote\n");
	}
}
