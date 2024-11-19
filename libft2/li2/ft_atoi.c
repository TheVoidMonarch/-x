/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 05:42:31 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/30 05:43:37 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int sign;
    long result;
    int x;

    x = 0;
    while (str[x] != '\0' && (str[x] == ' ' || str[x] == '\t' || str[x] == '\n'))
        x++;
    sign = 1;
    if (str[x] == '-')
        sign = -1;
    if (str[x] == '-' || str[x] == '+')
        x++;
    result = 0;
    while (str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
    {
        if ((sign == 1 && (result > 2147483647 / 10 || (result == 2147483647 / 10 && str[x] - '0' > 7))))
            return 2147483647;
        if ((sign == -1 && (result < -2147483648 / 10 || (result == -2147483648 / 10 && str[x] - '0' < -8))))
            return -2147483648;
        result = result * 10 + sign * (str[x] - '0');
        x++;
    }
    return (int)result;
}