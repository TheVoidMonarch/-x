#include <unistd.h>
#include <stdio.h>

int	skip(char *str, int x)
{
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n')
		x++;
	return (x);
}

int	sigma(char *str, int x, int *sign)
{
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
		{
			*sign = -*sign;
		}
		x++;
	}
	return (x);
}

int	ft_atoi(char *str)
{
	int	result;
	int	ptr;
	int	sign;

	result = 0;
	sign = 1;
	ptr = 0;
	ptr = skip(str, ptr);
	ptr = sigma(str, ptr, &sign);
	while (str[ptr] >= '0' && str[ptr] <= '9')
	{
		result = result * 10 + (str[ptr] - '0');
		ptr++;
	}
	result *= sign;
	return (result);
}
