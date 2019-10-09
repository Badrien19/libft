/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:41:56 by badrien           #+#    #+#             */
/*   Updated: 2019/10/09 14:49:53 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*rep;

	i = 0;
	if ((rep = malloc((sizeof(char) *
		(ft_strlen(&((char*)s)[start]) + 1)))) == 0)
		return (0);
	while (i < len && s[start + i] != '\0')
	{
		rep[i] = s[start + i];
		i++;
	}
	return (rep);
}