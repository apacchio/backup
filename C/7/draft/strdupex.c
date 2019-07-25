/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:15:06 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/20 21:28:49 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen( char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strcpy(char		*dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (tmp);
}

char *ft_strdup(char *src)
{
	int len;
	char *dest;

	len = ft_strlen(src) + 1;
	dest = malloc(sizeof(char) * len);
	ft_strcpy(dest, src);
	return (dest);
}

#include <string.h>
#include <stdio.h>

int		main()
{
	char s1[] = "the new Wildlife EP is wicked";

	printf("%s\n", strdup(s1));
	printf("%s\n", ft_strdup(s1));
}
