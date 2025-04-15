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

int main()
{
    char a[10] = "AVeVD";

    printf("length %d", r_strlen(a));
}