//Take two string and compare them.if both string are same then display 
//indentical otherwise display "not identical"
#include<stdio.h>
#include<string.h>
int main(){
	char s1[200];
	char s2[200];
	printf("Enter first string:\n");
	gets(s1);
	printf("Enter second string:\n");
	gets(s2);
	if(strcmp(s1,s2)==0){
		printf("Identical.\n");
	}else{
		printf("Not identical.\n");
	}
	return 0;
}
