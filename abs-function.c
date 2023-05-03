#include <stdio.h>
#include <stdlib.h>
int my_abs(a)
{
    int b = abs(a);
    return b;
}
int main()
{
    int a;
    scanf("%d", &a);
    int x = my_abs(a);

    printf("%d", x);

    return 0;
}