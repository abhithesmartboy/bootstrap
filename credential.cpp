//Read the credentials and if email and password and role matched a particular than refer to him dashboard
#include<stdio.h>
main(){
	char emai,password,role;
	char adminemail[]="admin@gamil.com";
	char adminpass[]="1234";
	char stdEmail[]="std@gmail.com";
	char stdpass[]="12345";
	char role="Admin";
	char email="admin@gmail.com";
	char pass="1234";
	printf("%s",role);
	switch (role)
	{
		case"Admin":
			if(adminemail==email && pass==adminpass){
				printf("You are Admin \n Welcome to dashboard ");
				break;
			}
			else{
				printf("Your username and password is incorrect");
				break;
			}
			case"Student":
				if(stdEmail==email && pass==studentpass){
					print("You are Student \n Welcome to the dashboard")
				}
	}
}
