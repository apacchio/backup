/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:53:43 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/24 23:18:30 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str++ != '\0')
		l++;
	return (l);
}

int joined_str_len(int size, char **strs, char *sep)
{
	int i;
	int final_size;

	i = 0;
	final_size = 0;
	while (i < size)
	{
		final_size += ft_strlen(strs[i]);
		i++;
	}
	if (size != 0)
	{
		final_size += ft_strlen(sep) * (size -1);
	}
	final_size += 1;
	return (final_size);
}

void fill_final_string(int size, char **strs, char *sep, char *joined_str)
{
	int i;
	int final_string_index;
	int current_array_string_index;
	int sep_index;

	final_string_index = 0;
	i = 0;
	while (i < size)
	{
		current_array_string_index = 0;
		while (strs[i][current_array_string_index] != '\0')
		{
			joined_str[final_string_index] = strs[i][current_array_string_index];
			current_array_string_index++; 
			final_string_index++; 
		}
		if (i < size - 1)
		{
			sep_index = 0;
			while (sep[sep_index] != '\0')
			{
				joined_str[final_string_index] = sep[sep_index];
				sep_index++; 
				final_string_index++;
			}
		}
		i++;
	}
	joined_str[final_string_index] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int final_string_length;
	char *joined_str;

	final_string_length = joined_str_len(size, strs, sep);
	joined_str = malloc(final_string_length * sizeof(char));
	fill_final_string(size, strs, sep, joined_str);
	return (joined_str);
}

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
