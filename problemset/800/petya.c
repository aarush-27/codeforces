#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str1[101],str2[101];
    int count=0,c;
    while ((c=getchar())!='\n')
    {
        str1[count++] = tolower(c);
    }
    str1[count] = '\0';
    for (int i=0;i<count , (c=getchar())!='\n';i++)
    {
        str2[i] = tolower(c);
    }
    str2[count] = '\0';
    printf("%d",strcmp(str1,str2));
}
