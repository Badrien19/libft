/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:36:21 by badrien           #+#    #+#             */
/*   Updated: 2019/10/18 16:12:52 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** charset == "\0" 
*/

static char		**free_all(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
		free(tab[i++]);
	free(tab);
	return (0);
}

static int		motcounter(char *str, char charset)
{
	int i;
	int mot;
	int motcount;

	motcount = 0;
	mot = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset)
		{
			if (mot++ == 0)
				motcount++;
		}
		else
			mot = 0;
		i++;
	}
	if (mot == 0)
		motcount++;
	return (motcount);
}

static char		*fill(char *str, char charset, int *i)
{
	char	*tmp;
	int		y;

	y = 0;
	while (str[*i] == charset && str[*i] != '\0')
		(*i)++;
	while ((str[(*i) + y] != charset) && str[(*i) + y] != '\0')
		y++;
	tmp = malloc(sizeof(char) * (y + 1));
	if (tmp == 0)
		return (NULL);
	y = 0;
	while ((str[*i] != charset) && str[*i] != '\0')
		tmp[y++] = str[(*i)++];
	tmp[y] = '\0';
	return (tmp);
}

char			**ft_split(char *str, char charset)
{
	int		wordcount;
	char	**tab;
	int		x;
	int		i;

	x = 0;
	i = 0;
	if (str == NULL || charset == 0)
		return (NULL);
	wordcount = motcounter(str, charset);
	tab = malloc(sizeof(char *) * wordcount + 1);
	if (tab == 0)
		return (0);
	while (wordcount > 0)
	{
		tab[x++] = fill(str, charset, &i);
		if (tab[x - 1] == NULL)
			return (free_all(tab));
		wordcount--;
	}
	tab[x] = 0;
	return (tab);
}
