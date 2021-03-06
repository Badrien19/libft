/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:39:01 by badrien           #+#    #+#             */
/*   Updated: 2019/10/23 11:54:53 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*fonc)(void *), void (*del)(void *))
{
	t_list *new;

	new = NULL;
	if (lst == NULL || fonc == NULL)
		return (NULL);
	if ((new = ft_lstnew(lst->content)) == NULL)
		return (NULL);
	new->content = fonc(new->content);
	new->next = ft_lstmap(lst->next, fonc, del);
	return (new);
}
