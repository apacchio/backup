/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 02:38:21 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 21:11:44 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		f_isalphanumeric(char a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90) || (a >= 48 && a <= 57))
		return (1);
	else
		return (0);
}

int		f_iscap(char b)
{
	if (b >= 65 && b <= 90)
		return (1);
	else
		return (0);
}


char	*ft_strcapitalize(char *str)
{
	int m;
	m = 0;
	if (str[m] >= 97 && str[m] <= 122)
		str[m] -= 32;
	while (str[++m] != '\0')
	{
		if ((str[m] >= 97 && str[m] <= 122) && !(f_isalphanumeric(str[m - 1])))
			str[m] -= 32;
		else
		{
			if ((f_iscap(str[m])) && (f_isalphanumeric(str[m - 1])))
				str[m] += 32;
		}
	}
	return (str);
}

int		main()
{
	char str[] = "lA tEChno gRognoN c+Est toute !mavie";
	char *ptr;
	ptr = str;
	printf("%s", ft_strcapitalize(ptr));
		return (0);
}
