/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:14:54 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 18:27:12 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	lon;

	lon = ft_strlen(str);
	while (lon >= 0)
	{
		if ((unsigned char)str[lon] == (unsigned char)c)
			return ((char *)&str[lon]);
		lon--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "HOT TO GO!";
	char		*res;

	res = ft_strrchr(str, 'T');

	if (res)
		ft_putendl_fd(res, 1);
	else
		ft_putendl_fd("No encontrado", 1);
	return (0);
}*/
