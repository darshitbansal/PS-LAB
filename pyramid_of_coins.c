#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void area(float r,int t)
{
    printf("%f",((sqrt(3))/4)*(r*2*(t-1))*(r*2*(t-1)));
}

void main()
{
    int n,c,x=1,t=1,i=0;
    scanf("%d",&n);
    scanf("%d",&c);
    float r=c/(2*3.14);
    while(x<=n)
    {
        x=x+2+i;
        i++;
        t++;
        if(x==n)
        {
            area(r,t);
            exit(1);
        }    
    }
    if(x>n)
    {
        printf("triangle not possible");
    }
    
}


/*
void area(float r,int t)
{
    printf("%f",((sqrt(3))/4)*(r*2*(t-1))*(r*2*(t-1)));
}

void main()
{
    int n,c,x=1,t=1;
    scanf("%d",&n);
    scanf("%d",&c);
    float r=c/(2*3.14);
    for (int i=0;i<n;i++)
    {
        x=x+2+i;
        t++;
        if(x==n)
        {
            area(r,t);
            exit(1);
        }
        
    }
}*/
