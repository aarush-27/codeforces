#include <stdio.h>
long long maximum(long long a,long long b)
{
    return (a>b)? a:b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int freq[100001]={0};
    int max=0;
    for (int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        freq[x]++;
        if (x>max) max = x;
    }
    if (max==0)
    {
        printf("0");
        return 0;
    }
    long long val[100001];
    val[0]=0;
    val[1] = freq[1];
    for (int i=2;i<=max;i++)
    {
        val[i] = maximum(val[i-1],val[i-2]+(long long)i*freq[i]);
    }
    printf("%lld",val[max]);
}