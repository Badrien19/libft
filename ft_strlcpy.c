/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:32:17 by badrien           #+#    #+#             */
/*   Updated: 2019/10/18 17:09:43 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	size_t i;
	size_t b;

	i = 0;
	b = 0;
	if (dest == NULL || src == NULL)
		return (0);
	while (src[b] != '\0')
		b++;
	if (size == 0)
		return (b);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (b);
}
