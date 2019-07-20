/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 00:29:14 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 23:18:03 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{

	char *tmp
	
	tmp = str;
	while (*tmp != '\0')
	{
		if (!(*tmp >= 65 && *tmp <= 90) && !(*tmp >= 97 && *tmp <= 122))
			return (0);
		tmp++;
	}
	return (1);
}
