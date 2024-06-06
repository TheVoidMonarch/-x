#include <stdlib.h>
#include <unistd.h>

char *ft_toupper (char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	if (*str == '\0')
	{
		return (str);
	}
	char *temp;

	temp = str;

	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp + ('A' - 'a');

			temp++;
		}
	}
	return (str);
}