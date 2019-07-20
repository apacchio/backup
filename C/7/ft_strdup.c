/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:15:06 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/20 17:27:40 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{

	return (&src);
}

#include <string.h>
#include <stdio.h>

int		main()
{
	char s1[] = "the new Wildlife EP is wicked";

	printf("%p\n", strdup(s1));
	printf("%p\n", ft_strdup(s1));
}
