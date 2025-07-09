/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:28:49 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/05 22:40:43 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hol4 gaaaaaaaais";
	int	c = '4';
	size_t	n = 18;

	char	*res = ft_memchr(str, c, n);
	
	if (res)
		printf("Caracter '%c' encontrado: %s\n", c, res);
	else
		printf("Caracter '%c' no encontrado en los primeros %zu bytes.\n", c, n);
	return (0);
}*/
