//Take a string and count how many alphabets,digits,spaces,spacial character
#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	gets(s);
	int alphabet=0;
	int digit=0;
	int space=0;
	int spacailCharacter;
	int i=0;
	while(s[i]!='\0'){
		if(isalpha(s[i])){
			alphabet++;
		}else if(isdigit(s[i])){
			digit++;
		}else if(isspace(s[i])){
			space++;
		}else{
			spacailCharacter++;
		}
		i++;
	}
	printf("Alphabet=%d\n",alphabet);
	printf("Digits=%d\n",digit);
	printf("Spaces=%d\n",space);
	printf("Alphabets=%d\n",alphabet);
	printf("SpacailCharacter=%d\n",spacailCharacter);
	return 0;
}
