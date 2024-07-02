/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 03:41:22 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/07/02 12:41:16 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	is_charset(char c, char *charset)
{
	if (!charset)
		return (0);
	int	index;

	index = 0;
	while (charset[index])
	{
		if (c == charset[index])
			return (1);
		index++;
	}
	return (0);
}

int	get_length(char *str, char *charset)
{
	if (!str ||!charset)
		return (0);
	int	index;
	int	word_count;

	word_count = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] &&!is_charset(str[index], charset))
		{
			word_count++;
			while (str[index] &&!is_charset(str[index], charset))
				index++;
		}
		else
			index++;
	}
	return (word_count);
}
int	get_word_length(char *str, char *charset)
{
	if (!str || !charset)
		return (0);
	int	length;

	length = 0;
	while (str[length] && !is_charset(str[length], charset))
		length++;
	return (length);
}

char	**ft_split(char *str, char *charset)
{
	if (!str || !charset)
		return (NULL);
	char	**output;
	int		length;
	int		index1;
	int		index2;

	output = malloc(sizeof(char *) * (get_length(str, charset) + 1));
	if (output == NULL)
		return (NULL);
	index1 = 0;
	index2 = 0;
	while (str[index1] && index2 < get_length(str, charset))
	{
		while (str[index1] && is_charset(str[index1], charset))
			index1++;
		length = get_word_length(str + index1, charset);
		output[index2] = malloc(sizeof(char) * (length + 1)); 
		if (output[index2] == NULL)
			return (NULL);
		ft_strlcpy(output[index2], str + index1, length + 1); 
		index2++;
		index1 += length;
	}
	output[index2] = NULL;
	return (output);
}