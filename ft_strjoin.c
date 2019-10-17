/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:09:03 by badrien           #+#    #+#             */
/*   Updated: 2019/10/17 15:49:20 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen((char *)s1);
	if (!(ret = malloc(sizeof(char) * (i + ft_strlen((char*)s2) + 1))))
		return (0);
	ft_memcpy(ret, s1, i);
	ft_memcpy(&ret[i], s2, ft_strlen((char*)s2) + 1);
	return (ret);
}
