#include <stdio.h>
#include <stdlib.h>

int r_strlen(char *a)
{
    size_t l = 0;
    while (*a++ != '\0')
    {
        l++;
    }
    return l;
}

char *r_strrev(char *str)
{
    int lenOfStr = r_strlen(str);
    char *rev = (char *)malloc(lenOfStr + 1);
    int i = lenOfStr;

    str += (lenOfStr - 1);
    while (i != 0)
    {
        *rev++ = *str--;
        i--;
    }
    rev -= lenOfStr;
    return rev;
}

int main()
{
    char str[] = "eye";
    char *rev = r_strrev(str);
    printf("Reversed: %s\n", rev);
    return 0;
}
