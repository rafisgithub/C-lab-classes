#include<stdio.h>
int main(){
    char ar[5000];
    int i, n;
    printf("How many character do wanna to print:\n");
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        scanf("%c", &ar[i]);
    }
    for (i = 0; i < n;i++){
        printf("%c", ar[i]);
    }
}
//another way
#include<stdio.h>
int main(){
    char ar[3000];
    gets(ar);
    puts(ar);
}