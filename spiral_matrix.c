#include <stdio.h>
int main()
{
    int a[10][10], i, j, m, n;
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
    int x=0,y=0,z=m-1,w=n-1;
    while(x<=z&&y<=w){
    for (i=y;i<=w;i++)
    {
        printf("%d",a[x][i]);
    }
    x++;
    for(i=x;i<=z;i++)
    {
        printf("%d",a[i][w]);
    }
    w--;
    if(y<=w)
    {
    for(i=w;i>=y;i++)
    {
        printf("%d",a[z][i]);
    }
    z--;}
    if(x<=z){
    for(i=z;i>=x;i++)
    {
        printf("%d",a[i][y]);
    }
    y++;}
    }
    return 0;
}
    