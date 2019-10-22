/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:43:03 by badrien           #+#    #+#             */
/*   Updated: 2019/10/22 11:02:19 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *phrase, const char *mot, int len)
{
	int i;
	int x;
	int taille;

	i = 0;
	x = 0;
	taille = 0;
	while (mot[taille] != '\0')
		taille++;
	if (taille == 0)
		return ((char *)phrase);
	while (phrase[i] != '\0' && i < len)
	{
		while (phrase[i + x] == mot[x] && i + x < len && phrase[i + x] != '\0')
			x++;
		if (x == taille)
			return ((char *)&phrase[i]);
		x = 0;
		i++;
	}
	return (0);
}
