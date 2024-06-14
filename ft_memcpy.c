#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t size)
{
    if (dest == NULL || src == NULL)
        return NULL;

    unsigned char *dst;
    const unsigned char *source;
    size_t i;

    i = 0;
    dst = (unsigned char *)dest;
    source = (const unsigned char *)src;

    while (i < size)
    {
        dst[i] = source[i];
        i++;
    }
    return dest;
}
