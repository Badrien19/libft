/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:22:55 by badrien           #+#    #+#             */
/*   Updated: 2019/10/21 15:27:59 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int valeur, size_t numberoftime)
{
	unsigned int i;

	i = 0;
	if (pointer == NULL)
		return (NULL);
	while (i < numberoftime)
	{
		((unsigned char*)pointer)[i] = (unsigned char)valeur;
		i++;
	}
	return (pointer);
}
