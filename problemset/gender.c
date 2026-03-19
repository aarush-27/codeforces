#include <stdio.h>
int not_in (char a[], char c, int n)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]==c)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int c,count=0;
    char name[1000];
    while ((c=getchar())!=EOF && c!='\n')
    {
        name[count++] = c;
    }
    int t=0;
    for (int i=0;i<count;i++)
    {
        if (not_in(name,name[i],i))
        {
            t++;
        }
    }
    if (t%2)
    {
        printf("IGNORE HIM!");
    }
    else
    {
        printf("CHAT WITH HER!");
    }
}