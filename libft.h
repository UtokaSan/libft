/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:00:58 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/01 16:47:15 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_atoi(const char *str);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
void			*ft_memccpy(void *dest, const void *src, int ch, int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_bzero(void *pointer, unsigned int count);
void			*ft_memset(void *pointer, int value, unsigned int count);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *src);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
char			*ft_strnstr(const char *b, const char *l, unsigned int len);
void			*ft_calloc(unsigned int count, unsigned int size);

#endif
