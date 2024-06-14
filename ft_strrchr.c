#include <stddef.h>
#include <unistd.h>

char *ft_strrchr(const char *str, int c)
{
    const unsigned char *ptr;
    unsigned char   chck;
    char    *lo;

    ptr = (const unsigned char *)str;
    chck = (unsigned char)c;
    lo = NULL;

    if (str == NULL)
    {
        return (NULL);
    }

    
    while (*ptr != '\0')
    {
        if (*ptr == chck)
        {
            lo = (char *)ptr;
        }
        ptr++;
    }

   
    if (*ptr == chck)
    {
        return (char *)ptr;
    }

    return lo;
}
