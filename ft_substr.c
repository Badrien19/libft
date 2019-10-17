/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:41:56 by badrien           #+#    #+#             */
/*   Updated: 2019/10/17 10:37:14 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**si start > taille de la chaine de caract return une chaine vide
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*rep;

	i = 0;
	if ((rep = malloc((sizeof(char) * (len + 1)))) == 0)
		return (0);
	if (!(start > ft_strlen(s)))
	{
		while (i < len && s[start + i] != '\0')
		{
			rep[i] = s[start + i];
			i++;
		}
	}
	rep[i] = '\0';
	return (rep);
}
