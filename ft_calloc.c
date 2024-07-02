/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:14:47 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/07/02 13:21:57 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			total_size;
	unsigned char	*temp_ptr;

	// Check for overflow
	if (size && count > SIZE_MAX / size) {
		errno = ENOMEM;
		return (NULL);
	}

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);

	temp_ptr = (unsigned char *) ptr;
	while (total_size--)
	{
		*temp_ptr++ = 0;
	}
	return (ptr);
}
