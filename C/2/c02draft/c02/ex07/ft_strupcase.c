/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 01:52:08 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 02:14:44 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{	
	while (*str != '\0')
	{
	if (!(*str >= 97 && *str <= 122))
	*str +32;
		return (str);
	str++;
	}

}
