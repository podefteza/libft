/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:50:58 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:18:13 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Compares up to num characters of the C string str1 to those of str2.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* remove comment to test...
int	main(void)
{
	char s1[] = "ABCD";
	char s2[] = "ABC";
	int n = 3;
	int result = ft_strncmp(s1, s2, n);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n, s1, s2, result);

	char s3[] = "ABCD";
	char s4[] = "ABCE";
	int n2 = 10;
	int result2 = ft_strncmp(s3, s4, n2);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n2, s3, s4, result2);

	char s5[] = "42";
	char s6[] = "42 Porto";
	int n3 = 2;
	int result3 = ft_strncmp(s5, s6, n3);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n3, s5, s6, result3);

	char s7[] = "Teste1";
	char s8[] = "Teste";
	int n4 = 6;
	int result4 = ft_strncmp(s7, s8, n4);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n4, s7, s8, result4);

	char s9[] = "\0";
	char s10[] = "TestNULL";
	int n5 = 6;
	int result5 = ft_strncmp(s9, s10, n5);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n5, s9, s10, result5);

	char s11[] = "";
	char s12[] = "";
	int n6 = 10;
	int result6 = ft_strncmp(s11, s12, n6);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n6, s11, s12, result6);

	char s13[] = "qwertyuiopçlkjhgfdsazxcvbnm";
	char s14[] = "\0";
	int n7 = -5;
	int result7 = ft_strncmp(s13, s14, n7);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n7, s13, s14, result7);

	return (0);
}*/
