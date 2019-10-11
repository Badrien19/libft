/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:55:31 by badrien           #+#    #+#             */
/*   Updated: 2019/10/11 15:13:26 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	if (!(map = malloc(sizeof(char) * (ft_strlen((char*)s) + 1))))
		return (0);
	while (s[i] != '\0')
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
