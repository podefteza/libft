/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:03 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:18:09 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function f to each character of the string s, passing its index
as the first argument and the character itself as the second. A new string is
created (using malloc(3)) to collect the results from the successive
applications of f. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	size_t	length;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (ft_strdup(""));
	length = ft_strlen(s);
	out = (char *)malloc(sizeof(char) * (length + 1));
	if (out == NULL)
		return (NULL);
	while (i < length)
	{
		out[i] = (*f)(i, s[i]);
		++i;
	}
	out[i] = '\0';
	return (out);
}
/*
char	upper(unsigned int index, char c)
{
	(void)index;
	return (char)ft_toupper((int)c);
}

int	main(void)
{
	char	str[] = "42 Porto";
	char *result = ft_strmapi(str, &upper);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		return (0);
}*/
