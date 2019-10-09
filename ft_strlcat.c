/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:16:57 by badrien           #+#    #+#             */
/*   Updated: 2019/10/09 10:57:01 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int y;

	y = 0;
	if (size == 0)
		return (ft_strlen((char*)src));
	i = ft_strlen((char*)dest);
	while (i + y < size - 1)
	{
		dest[i + y] = src[y];
		y++;
	}
	if (dest[size - 1] != '\0')
		return (ft_strlen((char*)src) + size);
	return (i + (ft_strlen((char *)src)));
}
