#include <stdlib.h>
#include <unistd.h>
/*#include <stdio.h>*/
void ft_bzero(void *s, size_t n)
{
    unsigned char   *ptr;
    ptr = (unsigned char *)s;
    while (n--)
    {
        *ptr++ = 0;
    }
}
