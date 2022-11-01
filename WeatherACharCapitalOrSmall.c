#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Capital\n");
    }else if(ch >= 'a' && ch <= 'z'){
    	printf("Small\n");
	}else{
		printf("Invalid input\n");
	}
       
}