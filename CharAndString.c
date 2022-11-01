#include<stdio.h>
int main(){
    int n;
    char ar[1000];
    printf("How many character do you wanna print:\n");
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        scanf("%c", &ar[i]);
    }
    for (i = 0; i < n;i++){
        printf("%c", arr[i]);
    }
}