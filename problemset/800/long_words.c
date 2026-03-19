#include <stdio.h>
#define MAX 101
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char word[MAX];
    for (int i=0;i<n;i++)
    {
        int c,count=0;
        while ((c=getchar())!=EOF && c!='\n')
        {
            word[count++] = c;
        }
        word[count] = '\0';
        if (count>10)
        {
            printf("%c",word[0]);
            printf("%d",count-2);
            printf("%c",word[count-1]);
        }
        else
        {
            printf("%s",word);
        }
        printf("\n");
    }
}
