#include <stdio.h>
int main()
{
    int a[10][10], i, j, m, n,x=0,y,z,c;
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
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i==j)
            {
                x+=a[i][j];
            }
        }
    }
    for (i=0;i<m;i++)
    {
        y=0;
        z=0;
        for(j=0;j<n;j++)
        {
            y+=a[i][j];
            z+=a[j][i];
        }
        if(y==x&&z==x)
            c=1;
        else
            c=0;
            break;      
    }
    if (c==1)
        printf("magic matrix");
    else
        printf("not magic matrix");
    return 0;
}