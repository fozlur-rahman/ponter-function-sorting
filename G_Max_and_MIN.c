#include <stdio.h>
void max_min(int a[], int n, int *min_ptr, int *max_ptr)
{
    *min_ptr = a[0];
    *max_ptr = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < *min_ptr)
        {
            *min_ptr = a[i];
        }
        if (a[i] > *max_ptr)
        {
            *max_ptr = a[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], min_ptr, max_ptr;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max_min(a, n, &min_ptr, &max_ptr);
    printf("%d %d", min_ptr, max_ptr);
    return 0;
}