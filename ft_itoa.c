/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:34:27 by badrien           #+#    #+#             */
/*   Updated: 2019/10/10 17:36:11 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_number(int i, unsigned int nb, int signe)
{
	char *number;

	if (!(number = malloc(sizeof(char) * i + 2)))
		return (0);
	number[i + 1] = '\0';
	if (nb == 0)
		number[i] = '0';
	while (nb > 0)
	{
		number[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (signe == -1)
		number[0] = '-';
	return (number);
}

char	*ft_itoa(int n)
{
	int				signe;
	int				i;
	unsigned int	nb;

	i = 0;
	signe = 1;
	if (n < 0)
		signe = -1;
	nb = (n < 0) ? (n * -1) : (n);
	n = nb;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (signe == -1)
		i++;
	if (nb == 2147483648 && signe == -1)
		i = 10;
	return (fill_number(i, nb, signe));
}
