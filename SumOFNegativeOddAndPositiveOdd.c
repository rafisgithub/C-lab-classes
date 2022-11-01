//sum of 1-2+3-4+5+............+-n
#include<stdio.h>
int main(){
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2!=0)
        sum+=i;
        else
        sum-=i;
    }
    printf("Sum=%d",sum);
}