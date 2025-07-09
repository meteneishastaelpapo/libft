/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:33:32 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 18:46:30 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char	c1 = 'A';
	char	c2 = 'Z';
	char	c3 = 'm';
	char	c4 = '5';

	ft_putchar_fd(ft_tolower(c1), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower(c2), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower(c3), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower(c4), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
