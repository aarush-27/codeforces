#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    getchar();
    for (int i=0;i<n;i++)
    {
        s[i] = getchar();
    }
    int count =0 ;
    for (int i=0;i<n-1;i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
}