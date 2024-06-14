#include <unistd.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	if (str == NULL)
	{
		return(NULL);
	}
	
    size_t x;
    size_t z;

    if (*to_find == '\0')
        return (char *)str;

    x = 0;
    while (str[x] && x < n)
    {
        z = 0;
        while (str[x + z] == to_find[z] && to_find[z] && (x + z) < n)
            z++;
        if (to_find[z] == '\0')
            return (char *)&str[x];
        x++;
    }
    return NULL;
}
