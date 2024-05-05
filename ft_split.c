/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:42:36 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:17:39 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter. The array must end with
a NULL pointer. */

#include "libft.h"

static size_t	string_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

static size_t	string_length(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

static char	*split_string(char const *s, char c, size_t *start, size_t *end)
{
	size_t	i;
	size_t	j;
	char	*substring;

	*end = *start + string_length(s + *start, c);
	i = *start;
	j = 0;
	substring = (char *)malloc((*end - *start + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (i < *end)
		substring[j++] = s[i++];
	substring[j] = '\0';
	*start = *end;
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**split;

	i = 0;
	j = 0;
	split = (char **)malloc((string_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			split[j++] = split_string(s, c, &start, &i);
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
/*
int	main(void)
{
	char	s[] = "42 Porto Portugal";
	char	c = ' ';
	char	**split = ft_split(s, c);
	int		i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/
