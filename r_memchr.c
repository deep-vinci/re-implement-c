#include <stdio.h>

int r_strlen(char *a)
{
    size_t l = 0;
    while (*a++ != '\0')
    {
        l++;
    }
    return l;
}

// this can be also done using array indexing but i am just trying to polish my pointers
char *r_memchr(char *source, char searchTerm, int len)
{
    // addon feature?
    if (len < 0)
    {
        len = r_strlen(source);
    }

    int i = 0;
    while (i <= len)
    {
        if (*source == searchTerm)
        {
            return source;
        }
        else
        {
            source++;
        }
        i++;
    }

    return NULL;
}

int main()
{
    char str[10] = "abcxde";

    char *ptr = r_memchr(str, 'x', -1);

    if (ptr != NULL)
    {
        puts(ptr); // exprected output is de
    }
    else
    {
        puts("NULL");
    }
}