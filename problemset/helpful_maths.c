#include <stdio.h>
int min(int a[],int l,int r)
{
    int t = l;
    for (int i=l;i<=r;i++)
    {
        if(a[t]>a[i])
        {
            t = i;
        }
    }
    return t;
}
void swap(int a[],int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void selection_sort(int a[],int l,int n)
{
    if(l>=n-1) return;
    swap(a,min(a,l,n-1),l);
    selection_sort(a,l+1,n);
}
int main()
{
    int c,a[1000],count=0;
    while ((c=getchar())!=EOF && c!='\n')
    {
        if (c=='+')
        {
            continue;
        }
        a[count++] = c-'0';
    }
    selection_sort(a,0,count);
    for (int i=0;i<count-1;i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d",a[count-1]);
}