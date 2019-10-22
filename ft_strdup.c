/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:05:32 by badrien           #+#    #+#             */
/*   Updated: 2019/10/22 10:59:10 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	la fonction de base n'est pas protéger
*/

char	*ft_strdup(const char *s)
{
	char			*new;

	if ((new = malloc(sizeof(char) * ft_strlen((char *)s) + 1)) == 0)
		return (NULL);
	ft_memcpy(new, (char*)s, ft_strlen((char *)s) + 1);
	return (new);
}
