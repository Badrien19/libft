/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:04:27 by badrien           #+#    #+#             */
/*   Updated: 2019/10/17 15:47:41 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int						i;
	int						signe;
	unsigned long long int	value;
	unsigned long long int	max;

	i = 0;
	value = 0;
	signe = 1;
	max = 9223372036854775807;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		signe = (str[i++] == '-') ? -1 : 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10;
		value = value + str[i] - '0';
		i++;
		if (value > max && signe == 1)
			return (-1);
		if (value > max + 1 && signe == -1)
			return (0);
	}
	return ((int)(value * signe));
}
