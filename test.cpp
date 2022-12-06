#include <stdio.h>
#include <unistd.h>

void main()
{
    printf("fuck you\n");
    write(1, "asshole\n", 8);
}