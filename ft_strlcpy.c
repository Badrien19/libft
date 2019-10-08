/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:32:17 by badrien           #+#    #+#             */
/*   Updated: 2019/10/08 13:40:40 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*renvoie la taille de srouce dans tous les cas  9 (i < size -1 && src[i] != '\0') */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int b;

	i = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (b);
}
