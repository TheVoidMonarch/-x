#include <unistd.h>
#include <stdlib.h>

void *ft_memset(void *str, int c,size_t n)
{
	if (str == NULL)
	    return (NULL);

	char *ptr;
	ptr = (char *)str;
	while (n--)
	{
		*ptr++ = c;
	}
	return (str);
}
