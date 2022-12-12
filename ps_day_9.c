#include<stdio.h>
//Find N-th term in the series
//https://practice.geeksforgeeks.org/problems/find-n-th-term-in-the-series3926/1/?category[]=Mathematical&category[]=Mathematical&page=1&query=category[]Mathematicalpage1category[]Mathematical

void main()
{
    int a=9,n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a);
    }
    else
    {
        for (int i=0;i<n-1;i++)
        {
            a=a+24+(i*16);
            if(i==n-2)
            {
                printf("%d",a);
            }        
        }
    }        
}