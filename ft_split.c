/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 05:32:19 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/08/12 05:46:22 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	wordcount(char const *str, char c);
static char	*memory(char const *str, char c, int *k);
static void	free_array(char **strs, int i);
static void	ft_strcpy(char *dst, char const *src, char c, int j);

char	**ft_split(char const *str, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		pos;

	if (str == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	j = wordcount(str, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = memory(str, c, &pos);
		if (strs[i] == NULL)
		{
			free_array(strs, i - 1);
			return (NULL);
		}
		i++;
	}
	return (strs);
}

static int	wordcount(char const *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == c) && str[i] != c)
			word++;
		i++;
	}
	return (word);
}

void	ft_strcpy(char *dst, char const *src, char c, int start)
{
	int	i;

	i = 0;
	while (src[start + i] != c && src[start + i] != '\0')
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
}

static char	*memory(char const *str, char c, int *k)
{
	char	*word;
	int		j;
	int		len;

	j = *k;
	while (str[j] == c)
		j++;
	len = 0;
	while (str[j + len] != c && str[j + len] != '\0')
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	ft_strcpy(word, str, c, j);
	*k += len + 1;
	while (*k < (int)strlen(str) && str[*k] == c)
		(*k)++;
	return (word);
}

static void	free_array(char **strs, int i)
{
	while (i >= 0 && strs[i] != NULL)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
}
