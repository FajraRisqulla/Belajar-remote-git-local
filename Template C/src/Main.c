#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char* var1;
    var1 = (char*) malloc(100*sizeof(var1));

    strcpy(var1, "Hallo Para Deadwoods");

    printf("%p\n", &var1);
    printf("%p\n", var1);
    //printf("Hello World");

    return 0;
}
