#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Hello";
    char destination[20];
    strcpy(destination, source);
    printf("Copied String: %s\n", destination);
    return 0;
}