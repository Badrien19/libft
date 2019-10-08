/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:32:17 by badrien           #+#    #+#             */
/*   Updated: 2019/10/07 15:50:26 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int r;

	i = 0;
	if (size == 0)
		return (0);
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	r = i;
	while (i < (size - 1))
	{
		dest[i] = '\0';
		i++;
	}
	dest[size - 1] = '\0';
	return (r);
}
