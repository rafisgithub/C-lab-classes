#include <stdio.h>
int main()
{
    
    int y=10;
    int *pointer;
    pointer = &y;
    *pointer = *pointer + 1;
    printf("%d\n", y);
    printf("%d\n", &y);
    printf("pointer=%d\n", pointer);
    printf("*pointer=%d\n", *pointer);
    printf("&*pointer=%d\n", &*pointer);
     printf("\n\n");
    int x;
    int *ptr;
    x = 10;
    ptr = &x;
    *ptr = *ptr + 1;
    printf("%d\n", x);
    printf("%d\n", &x);
    printf("ptr=%d\n", ptr);
    printf("*ptr=%d\n", *ptr);
    printf("&*ptr=%d\n", &*ptr);
   
}