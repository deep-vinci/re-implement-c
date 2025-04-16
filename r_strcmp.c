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

size_t r_strcmp(char *a, char *b)
{
    while (*a != '\0')
    {
        if (*a++ != *b++)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[10] = "ABF";
    char b[10] = "ABF";

    if (r_strcmp(a, b) == 1)
    {
        puts("Equal");
    }
    else
    {
        puts("Unequal");
    }

    return 0;
}