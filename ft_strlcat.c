/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:16:57 by badrien           #+#    #+#             */
/*   Updated: 2019/10/18 14:16:53 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*cpy_dst;
	const char	*cpy_src;
	size_t		free_space_dest;
	size_t		size_dst;

	cpy_dst = dest;
	cpy_src = src;
	free_space_dest = size;
	while (free_space_dest-- != 0 && *cpy_dst != '\0')
		cpy_dst++;
	size_dst = cpy_dst - dest;
	free_space_dest = size - size_dst;
	if (free_space_dest == 0)
		return (size_dst + ft_strlen((char *)cpy_src));
	while (*cpy_src != '\0')
	{
		if (free_space_dest != 1)
		{
			*cpy_dst++ = *cpy_src;
			free_space_dest--;
		}
		cpy_src++;
	}
	*cpy_dst = '\0';
	return (size_dst + (cpy_src - src));
}