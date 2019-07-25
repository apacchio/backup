/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qpqusqhqeaedn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:02:45 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 12:59:51 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*qpush(char *s1, char *s2)
{
	int i;
	int j;
	char *s3;
	char a;

	s3 = 0;
	i = 0;
	j = 0;
	a = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			s3[j] = s2[i];
			a = i;
			i++;
			j++;
		}
		while (s2[i + 1] != a && s1[i] && s2[i])
		{
			s3[j] = s2[i];
			i++;
			j++;
		}
		i++;
	}
	return (s3);
}

#include <unistd.h>

int		main(int argc, char **argv)
{
	(void) argc;
	char *s1 = argv[1];

	if (argc == 3)
	{
		qpush(s1, argv[2]);
		while (*s1)
		{
			write(1, &(*s1), 1);
			s1++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
