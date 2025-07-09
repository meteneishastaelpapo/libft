/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:48:01 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 17:56:03 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	src[] = "Pink Pony Club";
	char	dst[20];
	size_t	ret;

	ret = ft_strlcpy(dst, src, sizeof(dst));

	printf("src: \"%s\"\n", src);
	printf("dst: \"%s\"\n", dst);
	printf("ret (lon de src): %zu\n", ret);
	return (0);
}*/
