#include <stdio.h>
int main()
{
    int i,j,k,l,m,x,y;
    scanf("%d",&i);
    while (i!=0)
    {
        int c=0;
        scanf("%d%d%d%d",&j,&k,&l,&m);
        for (x=j+1;x<l;x++)
        {
            if(k<m)
            {
            for (y=k+1;y<m;y++)
            {
                if (y==((m-k)/(l-j))*(x-j)+k)
                {
                    c++;
                }
            }
            }
            if(k>m)
            {
            for (y=m+1;y<k;y++)
            {
                if (y==((m-k)/(l-j))*(x-j)+k)
                {
                    c++;
                }
            }
            }
        }
        printf("%d\n",c);
        i--;
    }
    
    
    return 0;
}