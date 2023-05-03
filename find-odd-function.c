#include <stdio.h>
int find_odd(int a[], int n)
{
    int odd_num = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            odd_num++;
        }
    }
    return odd_num;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int odd_sum = find_odd(a, n);
    printf("%d ", odd_sum);
    return 0;
}