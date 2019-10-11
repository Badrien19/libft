/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:51:03 by badrien           #+#    #+#             */
/*   Updated: 2019/10/11 15:08:30 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	if (src == 0 && dest == 0)
		return (dest);
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dest);
}
