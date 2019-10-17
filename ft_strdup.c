/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:05:32 by badrien           #+#    #+#             */
/*   Updated: 2019/10/17 18:08:59 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*new;

	if ((new = malloc(sizeof(char) * ft_strlen((char *)s) + 1)) == 0)
		return (0);
	ft_memcpy(new, (char*)s, ft_strlen((char *)s) + 1);
	return (new);
}
