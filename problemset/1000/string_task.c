#include <stdio.h>
#include <ctype.h>
int main()
{
    int c;
    while ((c=getchar())!=EOF && c!='\n')
    {
        if (c>='A' && c<='Z')
        {
            c = tolower(c);
        }
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
        {
            continue;
        }
        putchar('.');
        putchar(c);
    }
}