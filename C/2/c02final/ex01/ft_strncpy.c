/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:26:58 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/12 01:55:32 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int nav;
	char *tmp;

	nav = 0;
	tmp = dest;
	while (*src != '\0' && nav < n)
	{
		nav++;
		*dest++ = *src++;
	}
	*dest = '\0';
	return (tmp);
}
