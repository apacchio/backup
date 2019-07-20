/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 02:15:47 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 22:57:33 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
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

#include <stdio.h>

int main()
{
	char str[50] = "salut c'est un test EN MAJ";
	char sor[] = "rien cest tres bien";
	printf("avant|%s\n", str);
	printf("apres|%s\n", ft_strcpy(str, sor));
	return (0);
}
