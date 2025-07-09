/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:32:25 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/05 22:56:37 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	size_t			i;
	int				diff;
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	i = 0;
	diff = 0;
	if (n)
		while (n--)
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
	return (0);
}
/*
int	main(void)
{
	char	j1[] = "Pipe13";
	char	f2[] = "Pipe05";
	size_t	n = 5;
	
	int res = ft_memcmp(j1, f2, n);
	
	if (res == 0)
		printf("Las cadenas son iguales en los primeros %zu bytes.\n", n);
	else if (res < 0)
		printf("j1 es menor que f2 en los primeros %zu bytes.\n", n);
	else
		printf("j1 es mayor que f2 en los primeros %zu bytes.\n", n);
	return (0);
}*/
