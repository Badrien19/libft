/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:52:23 by badrien           #+#    #+#             */
/*   Updated: 2019/10/17 18:08:29 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*new;
	unsigned int	start;
	unsigned int	nb;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	nb = ft_strlen(&s1[start]);
	if (nb != 0)
		while (s1[start + nb - 1] != '\0'
		&& ft_strchr(set, s1[start + nb - 1]) != 0)
			nb--;
	if (!(new = (char*)malloc(sizeof(char) * (nb + 1))))
		return (0);
	ft_memcpy(new, &s1[start], nb);
	new[nb] = '\0';
	return (new);
}
