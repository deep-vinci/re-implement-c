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

char *r_strncat(char *source, char *append, int len)
{
    int i = 0;
    source += r_strlen(source);
    while (i++ < len)
    {
        *source++ = *append++;
    }

    return source;
}

int main()
{
    char myStr[20] = "Hello";
    r_strncat(myStr, " World!", 5);
    printf("%s", myStr);
    return 0;
}