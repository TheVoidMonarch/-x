#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int skip(char *str)
{
    int r = 0;
    while (str[r] && (str[r] == ' || str[r] =='\t' ||
    str[r] == '\n' || str[r] == '\v' || str[r] == '\f' ||
    str[r] == '\r'))
        r++;
    return r;
}

int ft_atoi(const char *str)
{
    int x;
    int sign;
    int result;

    x = 0;
    sign = 1;
    result = 0;

    if (str == NULL)
    {
        return -1; 
    }

    
    x = skip(str);


    if (str[x] == '-')
    {
        sign = -1;
        x++;
    }
    else if (str[x] == '+')
    {
        x++;
    }

    while (str[x]!= '\0')
    {
        if (str[x] >= '0' && str[x] <= '9')
        {
            int digit = str[x] - '0';
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
            {
                return -1; 
            }
            result = result * 10 + sign * digit;
            x++;
        }
        else
        {
            break;
        }
    }

    return result;
}