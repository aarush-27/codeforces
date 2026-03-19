#include <stdio.h>
#include <ctype.h>
int main()
{
    int c;
    int count =0;
    while ((c=getchar())!=EOF && c!='\n')
    {
        if (count==0)
        {
            putchar(toupper(c));
            count++;
        }
        else{
            putchar(c);
        }
    }
}
