#include <stdlib.h>
#include <unistd.h>

int ft_isadigit(char const *str)
{
	int i;
	i = 0;

	if (str == NULL)
	
	{
		return (0);
	}
	if (str[i] == '\0')
	{
        return 0;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return 0;
		}
		i++;
	}

	return 1; 
}
