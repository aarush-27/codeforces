#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i=0;i<n;i++)
    {
        int d1,d2,d3;
        scanf("%d%d%d",&d1,&d2,&d3);
        int sum = d1+d2+d3;
        if (sum>=2)
        {
            count++;
        }
    }
    printf("%d",count);
}
