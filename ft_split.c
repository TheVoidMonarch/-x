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
/*#include <stdio.h>*/

static int		ft_wordcount(char const *str, char set)
{
	int i;
	int count;

	if (str == 0 || str[0] == 0)
		return (0);
	i = 1;
	count = 0;
	if (str[0] != set)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] != set && str[i - 1] == set)
			count++;
		i++;
	}
	return (count);
}

static char		**ft_malloc(char const *str, char set)
{
	int		len;
	char	**tab_str;

	len = ft_wordcount(str, set);
	tab_str = malloc(sizeof(*tab_str) * (len + 1));
	if (tab_str == 0)
	{
		return (0);
	}
	return (tab_str);
}

static int		ft_next_word_count(char const *str, char set, int i)
{
	int count;

	count = 0;
	while (str[i] == set && str[i] != '\0')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] != set)
	{
		count++;
		i++;
	}
	return (count);
}

static char		**ft_free(char **str_tab, int i)
{
	int j;

	j = 0;
	while (j < i && str_tab[j] != 0)
	{
		free(str_tab[j]);
		j++;
	}
	free(str_tab);
	return (0);
}

char			**ft_my_split(char const *str, char charset)
{
	int		s;
	int		i;
	int		j;
	char	**tab_str;

	if (str == 0)
		return (0);
	s = 0;
	i = -1;
	if (!(tab_str = ft_malloc(str, charset)))
		return (0);
	while (++i < ft_wordcount(str, charset))
	{
		j = 0;
		if (!(tab_str[i] = malloc(ft_next_word_count(str, charset, s) + 1)))
			return (ft_free(tab_str, i));
		while (str[s] != '\0' && str[s] == charset)
			s++;
		while (str[s] != '\0' && str[s] != charset)
			tab_str[i][j++] = str[s++];
		tab_str[i][j] = '\0';
	}
	tab_str[i] = 0;
	return (tab_str);
}

/*int main() {
    char **words = ft_my_split("hello,world,42,boi", ',');
    for (int i = 0; words[i]; i++) {
        printf("%s\n", words[i]);
    }
    ft_free(words, 4);
    return 0;
}*/
