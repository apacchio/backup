/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 00:18:05 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/23 01:35:26 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int v;

	v = 0;
	while (str[v] != '\0')
		v++;
	return (v);
}


char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	i = 0;
	while (des[i] != '\0')
		i++;
	while (src[i] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int v;

	v = 0;
	while (str[v] != '\0')
	{
		write(1, &(*str), 1);
		v++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{

		char *joined_str;
		int sep_length = ft_strlen(sep);
		int size = sizeof(strs) / sizeof(char *);
		int strings_total_size = 0;

		int sep_total_size = size - 1;
		int i = 0;

		while (i < size)
		{
			string_total_size += ft_strlen(strs[i]);
			i++;
		}
		int joined_str_len;

		joined_str_len = string_total_size + sep_total_size;
		joined_str = malloc(sizeof(char) * (joined_str_len + 1);

				i = 0;
				int joined_str_index;
				int current_string_index;

				joined_str_index = 0;

				while (i < string_count)
				{
					current_string_index = 0;
					while (strs[i][current_string_index]!='\0')
					{
						joined_str[joined_str_index] = strs[i][current_string_index];
						joined_str_index++;
						current_string_index++;
					}
						while ( )
						{

						}
				}
				joined_str[joined_str_index] = '\0/;
}

int		main()
{

}
