/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 00:04:59 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/24 08:06:34 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR
# define FT_STOCK_STR

typedef	struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}			t_stock_str;
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void    ft_putnbr(int nb);
void    ft_putstr(char *str);
void show_tab(struct s_stock_str *par);
int     ft_strlen(char *str);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strdup(char *src);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
#endif
