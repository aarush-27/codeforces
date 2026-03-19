#include <stdio.h>
#include <math.h>
int main()
{
    int a[5][5];
    int p=-1,q=-1;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j]==1)
            {
                p=i;
                q=j;
                break;
            }
        }
        if (p!=-1)
        {
            break;
        }
    }
    printf("%d",abs(p-2)+abs(q-2));
}
