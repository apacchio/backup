/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:29:34 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 01:05:22 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{	
	int nav;
	nav = 0;

	while (*src  != '\0' && nav < n)
	{
		nav++;
		*dest++ = *src++;
	}	
	*dest = '\0';
	return (dest);
}	
