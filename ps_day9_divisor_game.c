#include <stdio.h>
void main()
{
    int n, q = 0;
    scanf("%d", &n);
    int i = 1, j = 1;
    while (i < n && j < n)
    {
        if (q == 0 && i < n)
        {
            n = n - i;
            i++;
            q = 1;
        }
        if (q == 1 && j < n)
        {
            n = n - j;
            j++;
            q = 0;
        }
    }

    if (q == 1)
        printf("true");
    else
        printf("false");
}