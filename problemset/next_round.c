#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int scores[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }
    int t = scores[k-1];
    int count=0;
    for (int i=n-1;i>=0;i--)
    {
        if ((scores[i]>=t)&&(scores[i]>0))
        {
            count++;
        }
    }
    printf("%d",count);
}