/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:59:28 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 18:47:32 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char	c1 = 'a';
	char	c2 = 'z';
	char	c3 = 'D';
	char	c4 = '7';

	ft_putchar_fd(ft_toupper(c1), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper(c2), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper(c3), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper(c4), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
