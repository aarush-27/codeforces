#include <stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    getchar();
    for (int i=0;i<n;i++)
    {
        int d[3];
        for (int j=0;j<3;j++)
        {
            d[j] = getchar();
        }
        if ((d[0]=='+'&&d[1]=='+')||(d[1]=='+'&&d[2]=='+'))
        {
            x++;
        }
        else
        {
            x--;
        }
        getchar();
    }
    printf("%d",x);
}