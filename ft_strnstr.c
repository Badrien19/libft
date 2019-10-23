/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:43:03 by badrien           #+#    #+#             */
/*   Updated: 2019/10/22 13:42:19 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int i;
	int x;
	int taille;

	i = 0;
	x = 0;
	taille = 0;
	while (needle[taille] != '\0')
		taille++;
	if (taille == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + x] == needle[x] &&
			i + x < len && haystack[i + x] != '\0')
			x++;
		if (x == taille)
			return ((char *)&haystack[i]);
		x = 0;
		i++;
	}
	return (0);
}
