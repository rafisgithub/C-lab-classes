#include<stdio.h>
#include<math.h>
int main(){
    menu();
    return 0;
}
void menu();
int i;
printf("Enter:\n");
printf("1.For adding two number.\n");
printf("2.For substract two number.\n");
printf("3.For multiplicaton two number.\n");
printf("4.For division two number.\n");
printf("5.For percentage two number.\n");
scanf("%d", i);
if(i==1){
    Adding();
}
else if(i==2){
    Subtract();
}
else if(i==3){
    Multiple();
}
else if(i==4){
    Division();
}
else if(i==5){
    Percentage)();
}
 int n;

    printf("\n1. Return to Menu: \n");
    printf("2. Exit. \n");
    scanf("%d", &n);

    if(n==1){
        menu();
    }else{
        return 0;
    }

void Adding(){
    double a, b,result=0;
    printf("Enter two number:\n");
    scanf("%d%d", &a, &b);
    result = a + b;
    printf("sum is %d", result);
}
void Subtract(){
    double a, b,result;
    printf("Enter two number:\n");
    scanf("%d%d", &a, &b);
    result = a - b;
    printf("%d", result);
}
void Multiple(){
    double a, b,result;
    printf("Enter two number:\n");
    scanf("%d%d", &a, &b);
    result = a *b;
    printf("%d", result);
}
void Division(){
    double a, b,result;
    printf("Enter two number:\n");
    scanf("%d%d", &a, &b);
    result = a/ b;
    printf("%d", result);
}
void Percentage(){
    double a, b,result;
    printf("Enter two number:\n");
    scanf("%d%d", &a, &b);
    result = a+a*b/100;
    printf("%d", result);
}


