/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:53:43 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/25 01:18:22 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str++ != '\0')
		l++;
	return (l);
}

int		joined_str_len(int size, char **strs, char *sep)
{
	int i;
	int final_size;

	i = 0;
	final_size = 0;
	while (i < size)
		final_size += ft_strlen(strs[i++]);
	if (size != 0)
		final_size += ft_strlen(sep) * (size - 1);
	final_size += 1;
	return (final_size);
}

void	final_str(int size, char **strs, char *sep, char *joined_str)
{
	int i;
	int final_str_i;
	int current_str_i;
	int sep_i;

	final_str_i = 0;
	i = 0;
	while (i < size)
	{
		current_str_i = 0;
		while (strs[i][current_str_i] != '\0')
			joined_str[final_str_i++] = strs[i][current_str_i++];
		if (i < size - 1)
		{
			sep_i = 0;
			while (sep[sep_i] != '\0')
				joined_str[final_str_i++] = sep[sep_i++];
		}
		i++;
	}
	joined_str[final_str_i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		final_string_length;
	char	*joined_str;

	final_string_length = joined_str_len(size, strs, sep);
	joined_str = malloc(final_string_length * sizeof(char));
	final_str(size, strs, sep, joined_str);
	return (joined_str);
}

#include <stdio.h>

int  main(void)
{
	char *strs[] = {
		"to",
		"tu",
		"ta"
	};
	char *joined_str;

	joined_str = ft_strjoin(3, strs, "++");
	printf("joined string: %s\n", joined_str);
	free(joined_str);
	joined_str = ft_strjoin(0, strs, "++");
	printf("joined string: %s\n", joined_str);
	free(joined_str);
	return 0;
}
