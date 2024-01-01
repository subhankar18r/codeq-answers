#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
    printf("Comparison Result: %d\n", result);
    return 0;
}
