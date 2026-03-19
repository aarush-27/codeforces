#include <stdio.h>
int main()
{
    long long m,n,a;
    scanf("%lld%lld%lld",&m,&n,&a);
    printf("%lld",((m+a-1)/a)*((n+a-1)/a));
}