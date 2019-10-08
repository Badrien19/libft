/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:07:16 by badrien           #+#    #+#             */
/*   Updated: 2019/10/08 16:00:57 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#define size_t unsigned int

int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_strlen(char *chaine);
int ft_tolower(int c);
int ft_toupper(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *phrase, const char *mot, int len);
int	ft_atoi(const char *str);

#endif
