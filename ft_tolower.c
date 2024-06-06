#include <stdlib.h>
#include <unistd.h>

char *ft_tolower(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	if (*str == '\0')
	{
		return (NULL);
	}
	char *temp;

	temp = str;

	while (*temp != '\0')
	{
		if (*temp >= 'A' && *temp <= 'Z')
			{
				*temp = *temp + ('a' - 'A');
			
			temp++;
		
		}
	}
	return (str);
}