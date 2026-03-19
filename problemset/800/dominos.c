#include <stdio.h>
int max(int a,int b)
{
    return (a>=b)?a:b;
}
int domino(int m,int n)
{
    if (!(m%2) || !(n%2))
    {
        if (!(m%2))
        {
            return (m/2)*n;
        }
        if (!(n%2))
        {
            return (n/2)*m;
        }
    }
    else
    {
        return max(domino(m-1,n)+n/2,domino(m,n-1)+m/2);
    }
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",domino(m,n));
}
