#include <stddef.h>
#include <unistd.h>

char *ft_strchr(const char *str, int c)
{
    if (str == NULL)
    {
        return (NULL);
    }

    const unsigned char *ptr;
    const unsigned char   chck;

    ptr = (const unsigned char *)str;
    chck = (unsigned char)c;

    
    while (*ptr != '\0' && chck != '\0')
    {
        if (*ptr == chck)
        {
            return (char *)ptr;
        }
        ptr++;
    }
    return (NULL);
}

