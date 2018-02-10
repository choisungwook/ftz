
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *ptr;

    if (argc < 3) {
        printf("Usage: %s [environment]> [target program name]\n", argv[0]);
        return;
    }

    ptr = getenv(argv[1]);
    ptr += (strlen(argv[0]) - strlen(argv[2])) * 2; 
    printf("%p\n", ptr);
}
