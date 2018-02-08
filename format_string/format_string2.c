#include <stdio.h>

int main()
{
    int n = 7;
    char buf[] = "hello world";
    printf("%s%n\n", buf, &n);
    return 0;
}