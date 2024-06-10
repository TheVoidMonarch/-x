#include <stdlib.h>
#include <unistd.h>
int ft_isprint(char const *str)
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
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
