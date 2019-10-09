/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:09:03 by badrien           #+#    #+#             */
/*   Updated: 2019/10/09 16:19:33 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*ret;

	i = ft_strlen((char *)s1);

	if (!(ret = malloc(sizeof(char) * (i + ft_strlen((char*)s2) + 1))))
		return (0);
	ft_memcpy(ret, s1, i);
	ft_memcpy(&ret[i], s2, ft_strlen((char*)s2) + 1);

	return (ret);
}
