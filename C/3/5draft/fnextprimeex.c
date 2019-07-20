/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 07:30:27 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/18 08:35:59 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
		if (nb % i++ == 0)
		{
			nb++;
			i = 2;
		}
	return (nb);
}

int		main()
{
	int nb;
	nb = 58;
	printf("%d\n", ft_find_next_prime(nb));
}
