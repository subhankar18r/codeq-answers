#include <stdio.h>
int globalVar = 20;
void exampleFunction()
{
    printf("Global Variable: %d\n", globalVar);
}
int main()
{
    exampleFunction();
    printf("Global Variable: %d\n", globalVar);
    return 0;
}
