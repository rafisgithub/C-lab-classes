#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s1[] = "abc", s2[] = "abc", s3[] = "abd", s4[] = "abde";
    printf("output=%d\n", strcmp(s1, s2));
    printf("Output=%d\n", strcmp(s3, s1));
    printf("output=%d\n", strcmp(s1, s3));
    printf("output=%d\n", strcmp(s4, s3));
    return 0;
}
