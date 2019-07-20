/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:09:53 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/16 03:03:11 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && (i < n))
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[] = "lo compile";
	char s2[] = "go compare";

	printf("reality|%d\n", ft_strncmp(s1, s2, 9));
	printf("expectation|%d\n", strncmp(s1, s2, 9));
	return (0);
}
