/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:50:35 by badrien           #+#    #+#             */
/*   Updated: 2019/10/16 14:47:43 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*ret;
	unsigned int	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if ((ret = malloc(size * nmemb)) == 0)
		return (0);
	i = (size * nmemb);
	while (--i != 0)
	{
		ret[i] = '\0';
	}
	return (ret);
}
