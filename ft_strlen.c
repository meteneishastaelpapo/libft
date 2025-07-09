/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:40:51 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 18:08:38 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	const char	*str1 = "Femininomenon";
	const char	*str2 = "";
	const char	*str3 = "13052023";

	printf("CHAR 1: \"%s\" → Longitud: %zu\n", str1, ft_strlen(str1));
	printf("CHAR 2: \"%s\" → Longitud: %zu\n", str2, ft_strlen(str2));
	printf("CHAR 3: \"%s\" → Longitud: %zu\n", str3, ft_strlen(str3));

	return (0);
}*/
