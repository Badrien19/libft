/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:25:39 by badrien           #+#    #+#             */
/*   Updated: 2019/10/22 10:58:11 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = -1;
	if (dest == 0 && src == 0)
		return (0);
	if (dest < src)
		while (++i < n)
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
	else
		while (n-- > 0)
			((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
	return (dest);
}
