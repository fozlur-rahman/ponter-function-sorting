#include <stdio.h>
void addSum(int x, int y)
{
    int sum = x + y;
    printf("%d", sum);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    addSum(x, y);

    return 0;
}