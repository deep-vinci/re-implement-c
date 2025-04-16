#include <stdio.h>

// wtf am i doing with my life wtf is this 😭
char *r_strerror(int i)
{
    switch (i)
    {
    case 1:
        return "some error probably";
    case 2:
        return "definitely a error";
    default:
        return "dang";
    }
}

int main()
{
    int errno = 1;

    printf("error no: %d, error: %s", errno, r_strerror(errno));
}