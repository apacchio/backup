/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:45:20 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/15 21:47:23 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	char s1[50] = "vive";
	char s2[40] = "pusheen";
	char s3[30] = "vive";
	char s4[20] = "pusheen";

	printf("expectation|%s\n", strcat(s1, s2));
	printf("reality|%s\n", ft_strcat(s3, s4));
	return (0);
}	
