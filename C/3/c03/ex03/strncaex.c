/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:48:46 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/15 22:13:47 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j <= nb - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[50] = "tonton";
	char s2[50] = "friends";
	char s3[50] = "tonton";
	char s4[50] = "friends";

	printf("expectation|%s\n", strncat(s1, s2, 3));
	printf("reality|%s\n", ft_strncat(s3, s4, 3));
	return (0);
}
