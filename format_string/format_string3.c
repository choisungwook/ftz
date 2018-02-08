#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 7;
    char buf[128];
    strcpy(buf, argv[1]);
    printf(argv);
    printf("i : %p\n i : %d", &i, i);
    return 0;
}