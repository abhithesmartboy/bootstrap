//wap to check weather string is anagram or not
#include<stdio.h>
#include<string.h>
main(){
	char str[100],str1[100];
	int i,j,st1=0,st2=0,f=0;
	printf("Enter first string: ");
	gets(str);
	printf("Enter second string:");
	gets(str1);
	if (strcmp(str,str1)==0){
		printf("Both are equal and not anagram");
	}
	else{
		for(j=0;str[j]!='\0';j++){
			st1=st1+1;
		}
		for(j=0;str1[j]!='\0';j++){
			st2=st2+1;
		}
		if(st1==st2){
			for(i=0;str[i]!='\0';i++){
				for(j=0;str1[j]!='\0';j++){
					if(str[i]==str1[j]){
						f=f+1;
					}
				}
			}
		
	}else{
		printf("Not Anagram !");
	}
	}

	if(f==st1){
		printf("Anagram !");
	}
}
























