#include<stdio.h>
#include<stdlib.h>
#include<libgen.h>

int main(int argc, char* argv[])
{
    char* exe_name = basename(argv[0]);
    printf(" Executable Name: %s", exe_name);
    printf("\n");
    return EXIT_SUCCESS;
}
