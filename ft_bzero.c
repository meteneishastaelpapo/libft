/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:32:50 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/05 20:25:15 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "This is the way";
	size_t	n = 8;

	printf("Antes: ");
	write(1, str, 18);
	ft_bzero(str, n);
	printf("\nDespués: ");
	write(1, str, 18);
	printf("\n");
	return (0);
}*/
