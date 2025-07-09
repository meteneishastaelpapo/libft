/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:15:32 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 16:52:48 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*og = "Red Wine Supernova";
	char	*c = ft_strdup(og);

	if (!c)
	{
		printf("Error al duplicar la cadena.\n");
		return (1);
	}
	printf("OG: %s\n", og);
	printf("Copia: %s\n", c);
	free(c);
	return (0);
}*/
