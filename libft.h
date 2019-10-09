/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:07:16 by badrien           #+#    #+#             */
/*   Updated: 2019/10/09 15:22:39 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//#define size_t unsigned int
#include <stdlib.h>

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
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *phrase, const char *mot, int len);
int	ft_atoi(const char *str);
void	*ft_memset(void *pointer, int valeur, size_t numberoftime);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

#endif
