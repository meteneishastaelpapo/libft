/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:24:33 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 17:22:19 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}
/*
int	main(void)
{
	char	dst[35] = "Super Graphic Ultra";
	char	*src = " Modern Girl";
	size_t	dstsize = sizeof(dst);
	size_t	res;

	res = ft_strlcat(dst, src, dstsize);
	printf("dst: \"%s\"\n", dst);
	printf("Valor retornado: %zu\n", res);
	return (0);
}*/
