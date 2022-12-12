#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d",&a,&b,&c);
    d=a-c;
    e=b-c;
    if(d<0)
    d=-d;
    if(e<0)
    e=-e;
    if(d==e)
    printf("mouse escape");
    else if (d<e)
    printf("cat a catch mouse");
    else
    printf("cat b catch mouse");
    return 0;
}