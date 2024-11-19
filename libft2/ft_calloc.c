/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:22:39 by brybenja          #+#    #+#             */
/*   Updated: 2024/09/14 21:08:03 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	total_size;

	if (count == 0 || size == 0)
		return (malloc(1));
	total_size = count * size;
	if (total_size == 0 || total_size / count != size)
		return (NULL);
	pointer = malloc(total_size);
	if (!pointer)
	{
		free(pointer);
		return (NULL);
	}
	ft_memset(pointer, 0, total_size);
	return (pointer);
}
