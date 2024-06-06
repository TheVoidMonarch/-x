#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(char const *str)
{
	int i;

    i = 0;
    if (str == NULL)
    {
        return (0);
    }

    if (str[i] == '\0')
        {
            return (0);
        }

        while (str[i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                i++;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                i++;
            else
                return (0);
        }
        return (1);
    }