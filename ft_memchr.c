#include <unistd.h>
/*#include <stdio.h>*/

void *ft_memchr(const void *str,size_t n, int c)
{
    const unsigned char *ptr;
    unsigned char   chck;

    ptr = (const unsigned char *)str;
    chck = (unsigned char)c;

    if (str == NULL)
    {
        return (NULL);
    }
    while (n--)
    {
        if (*ptr == chck)
        {
            return ((void *)ptr);
        }
        ptr++;
    }
    return (NULL);
}

/*
int main() {
    char data[] = "Hello, world!";
    char target = 'w';
    char *result = ft_memchr(data, sizeof(data), target);

    if (result) {
        printf("Character '%c' found at position: %ld\n", target, result - data);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}
*/
