#include <stdio.h>
#include <string.h>
char my_len(a)
{
    int lenth = strlen(a);
    return lenth;
}

int main()
{
    char a[1001];
    scanf("%s", &a);
    int lth = my_len(a);
    printf("%d", lth);
    return 0;
}