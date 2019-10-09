/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:05:32 by badrien           #+#    #+#             */
/*   Updated: 2019/10/09 15:32:44 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char			*new;
	unsigned int	i;

	if ((new = malloc(sizeof(char) * ft_strlen((char *)s) + 1)) == 0)
		return (0);
	i = ft_strlcpy(new, (char*)s, ft_strlen((char *)s));
	return (new);
}
