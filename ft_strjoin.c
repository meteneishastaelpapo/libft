/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:27:31 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 17:12:19 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_strs(char *dst, const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
		dst[i++] = s2[j++];
	dst[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	copy_strs(str, s1, s2);
	return (str);
}
/*
int	main(void)
{
	char	*s1 = "Good Luck, ";
	char	*s2 = "Babe!";
	char	*res;
	
	res = ft_strjoin(s1, s2);
	if (!res)
	{
		printf("Error al unir las cadenas.\n");
		return (1);
	}
	printf("Resultado: %s\n", res);
	free(res);
	return (0);
}*/
