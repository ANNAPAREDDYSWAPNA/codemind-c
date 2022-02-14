#include<stdio.h>
int main()
{
    int n,s=0,m,d,temp;
    scanf("%d",&n);
    m=n*n;
    while(m>0)
    {
        d=m%10;
        s+=d;
        m=m/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}