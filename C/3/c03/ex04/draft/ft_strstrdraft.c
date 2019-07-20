/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:14:53 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/16 01:14:57 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while  (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (&str[i - j]);
}


#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[50] = "C'est pas";
	char s2[50] = "e";
	char s3[50] = "C'est pas";
	char s4[50] = "e";

	printf("expectation|%s\n", strstr(s1, s2));
	printf("reality|%s\n", ft_strstr(s3, s4));
	return (0);
}
