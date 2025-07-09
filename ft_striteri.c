/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javilla- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:13:31 by javilla-          #+#    #+#             */
/*   Updated: 2025/07/06 17:02:17 by javilla-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	to_uppercase(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);

}

int	main(void)
{
	char	str[] = "hot to go!";

	printf("Antes %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Despues: %s\n", str);
	return (0);
}*/
