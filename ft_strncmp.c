/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:18:37 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 18:18:46 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0') && (diff == 0) && (i < c))
	{
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((diff == 0) && (i < c))
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
	return (diff);
}
/*
int	main(void)
{
	char	*s1 = "libft42";
	char	*s2 = "libft99";

	int	resultado = ft_strncmp(s1, s2, 5);
	ft_putnbr_fd(resultado, 1);
	ft_putchar_fd('\n', 1);

	resultado = ft_strncmp(s1, s2, 6);
	ft_putnbr_fd(resultado, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
