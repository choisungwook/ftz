#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 7;
    char buf[128];
    strcpy(buf, argv[1]);
    printf(buf);
    printf("\ni : %p\ni : %d\n", &i, i);
    return 0;
}