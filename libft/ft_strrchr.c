/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:20:45 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:18:24 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Returns a pointer to the last occurrence of character in the C string str.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/* remove comment to test...
int	main(void)
{
	printf("The last '%c' in the string is at ", *ft_strrchr("42 Porto", 'o'));
	printf("%p\n", (void *)ft_strrchr("42 Porto", 'o'));
} */
