/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:31:44 by badrien           #+#    #+#             */
/*   Updated: 2019/10/17 15:51:04 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	c;

	if (!(s == NULL || fd == 0))
	{
		c = '\n';
		i = ft_strlen(s);
		write(fd, s, i);
		write(fd, &c, 1);
	}
}
