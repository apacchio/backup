/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 01:41:01 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 01:44:35 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
	if (!(*str >= 65 && *str <= 90))
		return (0);
	str++;
	}
	return (1);
}
