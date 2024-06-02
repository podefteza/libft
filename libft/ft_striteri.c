/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:18:06 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:17:51 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ on each character of the string passed as argument,
passing its index as first argument. Each character is passed by address to ’f’
to be modified if necessary. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
void	upper(unsigned int index, char *c)
{
	(void)index;
	*c = (char)ft_tolower((int)*c);
}

int	main(void)
{
	char str[] = "42 PORTO, Portugal";
	ft_striteri(str, &upper);
	printf("%s\n", str);
	return (0);
}*/
