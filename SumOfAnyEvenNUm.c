#include<stdio.h>
int main(){
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=2;i<=num;i+=2){
        sum+=i;
    }
    printf("Sum=%d",sum);
}