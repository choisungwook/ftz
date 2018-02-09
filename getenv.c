#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *ptr;
    if( argc < 3){
        printf("env, executeFilePath");
        return -1;
    }

    ptr = getenv(argv[1]);
    ptr += (strlen(argv[0]) - strlen(argv[2]))*2;
    printf("%p\n",ptr);
    return 0;
}