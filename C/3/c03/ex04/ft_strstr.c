/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:14:53 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/16 02:07:07 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (!to_find[0])
		return (str);
	while (*str)
	{
		if (*str == to_find[0])
		{
			i = 0;
			while (str[i] == to_find[i] && to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
