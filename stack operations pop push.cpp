#include<stdio.h>
#define N 5
main(){
	int stack[N],i,item,top=-1,ch=0;
	while(ch!=4){
		printf("1-> PUSH\n");
		printf("2-> POP\n");
		printf("3-> TRaverse\n");
		printf("4-> Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(top==N-1){
					printf("OVERFLOW?\n");
				}
				else{
					top=top+1;
					printf("Enter element to insert : ");
					scanf("%d",&item);
					stack[top]=item;
				}
				break;
				case 2:
					if(top==-1){
						printf("UNDERFLOW?\n");
					}
					else{
						item=stack[top];
						printf("Deleted item = %d\n",item);
						top=top-1;
					}
					break;
					case 3:
						if(top==-1){
							printf("Stack is empty\n");
						}
						else{
							printf("Element of stack\n");
							for(i=top;i>=0;i--){
								printf("%d\n",stack[i]);
							}
						}
						break;
						case 4:
						break;
						default:
							printf("Invalid choice\n");
						break;
		}
	}
}
