/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:51:29 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/15 18:21:40 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] && s2[c]))
		c++;
	return (s1[c] - s2[c]);
}

#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[] = "go compile";
	char s2[] = "go compile";
	printf("apres|%d\n", ft_strcmp(s1, s2));
	printf("function|%d\n", strcmp(s1, s2));
	return (0);
}
