/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 01:52:08 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 22:36:51 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *nav;

	nav = str;
	while (*nav != '\0')
	{
		if (*nav  >= 97 && *nav <= 122)
			*nav -= 32;
		nav++;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char str[] = "salut c'est un test EN MAJ";
	printf("avant|%s\n", str);
	printf("apres|%s\n", ft_strupcase(str));
	return (0);
}
