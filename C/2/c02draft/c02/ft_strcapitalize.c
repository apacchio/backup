/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apacchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 02:38:21 by apacchio          #+#    #+#             */
/*   Updated: 2019/07/11 05:58:40 by apacchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{	
	*str != '\0'
	str++
	if (*str >= 97 && *str <= 122);
	*str+32
	while (*str != '\0')
	{
	str++;
    if 	(!(*str >= 97 && *str <= 122) && !(*str >= 65 && *str <= 90) && !(*str >= 48 && *str <= 57))
	str++;
	if 
    
	*str+32	
	}


on se deplace dans la chaine
si on arrive a une lettre minuscule
+ 32 -> minuscule devient majuscule
on continue de se deplacer jusqua arriver a un caractere non alphanumerique-> nouveau mot
on se deplace jusqua a un caractere alphanumerique  -> premiere lettre
si la premiere lettre est une minuscule ->  +32
puis retour a ligne 33




}
