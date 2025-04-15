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

char *r_strcat(char *source1, char *source2)
{
    // source1 is also the destination of concatenated strs
    int appendAfter = r_strlen(source1);

    source1 += appendAfter;
    while (*source2 != 0)
    {
        *source1++ = *source2++;
    }

    return source1;
}

int main()
{
    char str1[20] = "cool ";
    char str2[] = "world!";

    r_strcat(str1, str2);

    puts(str1);
    puts(str2);
}