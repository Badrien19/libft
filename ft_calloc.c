/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:50:35 by badrien           #+#    #+#             */
/*   Updated: 2019/10/22 10:54:09 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ret;
	unsigned int	i;

	if ((ret = malloc(size * count)) == 0)
		return (0);
	i = (size * count);
	while (i > 0)
	{
		i--;
		ret[i] = '\0';
	}
	return (ret);
}
