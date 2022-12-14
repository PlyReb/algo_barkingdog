#include <stdio.h>

// int main()
// {
//     int a = 0;
//     for (int i = 1; i <= 5; ++i)
//     {
//         a++;
//         printf("a = %d, i = %d\n", a, i);
//     }
//     printf("\nwhile\n\n");
//     a = 1;
//     int b = 1;
//     while (b++ <= 5)
//     {
//         printf("a = %d,  b = %d\n", a, b);
//         a++;
//     }
// }

int main()
{
    printf("do while \n");
    int a = 0;
    do
    {
        printf("%d\n", a);
        ++a;
    } while (a <= 5);
    printf("\n\nwhile\n");
    a = 0;
    while (a <= 5)
    {
        printf("%d\n", a);
        ++a;
    };
}
