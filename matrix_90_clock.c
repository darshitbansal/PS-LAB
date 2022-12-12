#include <stdio.h>
int main()
{
    int a[10][10], i, j, m, n, x;
    printf("enter rows\n");
    scanf("%d", &m);
    printf("enter columns\n");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        if (n & 2 == 0)
        {
            for (j = i; j < n; j++)
            {
                //if (i != j)
                {
                    x = a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = x;
                }
            }
        }
        else
        {
            for (j = i; j < n; j++)
            {
                if (i != j)
                {
                    x = a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = x;
                }
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        if (n % 2 == 0)
        {
            for (j = 0; j < n / 2; j++)
            {
                x = a[i][j];
                a[i][j] = a[i][n-j-1];
                a[i][n-j-1] = x;
            }
        }
        else
        {
            for (j = 0; j < (n - 1) / 2; j++)
            {
                x = a[i][j];
                a[i][j] = a[i][n-j-1];
                a[i][n-j-1] = x;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}