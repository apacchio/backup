/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:14:53 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/16 01:54:24 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (!to_find[0])
		return(str);
	while (*str) 
	{	
		if (*str == to_find[0])
		{
			i = 0;
			while(str[i] == to_find[i] && to_find[i] && to_find[i])//
				i++;
			if(!to_find[i])
				return(str);
		}
		str++;
	}
			return (0);	
}


#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[50] = "Tanguy";
	char s2[50] = "a";
	char s3[50] = "Tanguy";
	char s4[50] = "a";

	printf("expectation|%s\n", strstr(s1, s2));
	printf("reality|%s\n", ft_strstr(s3, s4));
	return (0);
}
