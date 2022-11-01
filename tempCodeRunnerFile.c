#include<stdio.h>
int main(){
    int arr[20],i, sum = 0;
    for (i = 0; i < 10;i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10;i++){
        if(arr[i]%2==0){
            sum += arr[i];
        }
    }
    printf("%d", sum);
}