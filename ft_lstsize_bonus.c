/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:51:41 by badrien           #+#    #+#             */
/*   Updated: 2019/10/16 18:20:33 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (lst != NULL)
	{
		i = 0;
		while (lst != '\0')
		{
			lst = lst->next;
			i++;
		}
		return (i);
	}
	return (0);
}
