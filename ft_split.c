/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:33:55 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 16:46:07 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **res)
{
	int	i;

	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

static char	**write_result(char const *s, char c, char **res)
{
	size_t	start;
	size_t	i;
	size_t	word;

	start = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			res[word] = ft_substr(s, start, i - start + 1);
			if (!res[word])
			{
				ft_free(res);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (0);
	res = ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!res)
		return (0);
	res = write_result(s, c, res);
	return (res);
}
/*
int	main(void)
{
	char	**res;
	int	i;
	
	res = ft_split("She was a fairy <3", ' ');
	if (!res)
	{
		printf("Error al hacer split.\n");
		return (1);
	}

	i = 0;
	while (res[i])
	{
		printf("Word %d: %s\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
