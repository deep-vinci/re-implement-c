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

int r_strcspn(char *findIn, char *findFrom)
{
    int lenOfFindFrom = r_strlen(findFrom);
    int pos = 0;
    while (*findIn != '\0')
    {
        while (*findFrom != '\0')
        {
            if (*findFrom == *findIn)
            {
                return pos;
            }

            findFrom++;
        }
        findFrom = findFrom - lenOfFindFrom;
        findIn++;
        pos++;
    }

    return -1;
}

int main()
{
    char myStr[] = "Testing the end.";
    int pos = r_strcspn(myStr, ".,s");

    printf("%d", pos);

    return 0;
}