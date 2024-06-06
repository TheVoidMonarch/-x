#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	int len;

	len = 0;
	while (str[len]!= '\0')
	{
        len++;
    }
	return (len);
}