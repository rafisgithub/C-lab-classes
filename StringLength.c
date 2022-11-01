//Write a c program to print the length of string.
#include<stdio.h>
#include<string.h>
int main(){
    char ar[10000];
    gets(ar);
    int len = strlen(ar);
    printf("%d",len);
}