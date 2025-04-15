#include <stdio.h>

char *r_strcpy(char *destination, char *source)
{
    while (*source != '\0')
    {
        *destination++ = *source++;
    }
    *destination = '\0';
    return destination;
}

int main()
{
    char a[10] = "AbC";
    char b[10];

    r_strcpy(b, a);

    puts(a);
    puts(b);
}