/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:25:39 by badrien           #+#    #+#             */
/*   Updated: 2019/10/08 17:56:17 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	tmp[n];
	unsigned int	i;

	i = 0;
	if ((((unsigned char*)dest) == 0) && (((unsigned char*)src) == 0))
		return (0);
	while (i < n)
	{
		tmp[i] = ((unsigned char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
