/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:17:47 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 16:53:54 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd) {
    if (s) {
        while (*s) {
            write(fd, s, 1);
            s++;
        }
        write(fd, "\n", 1);
    }
}

