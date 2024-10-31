/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:00:58 by fboulbes          #+#    #+#             */
/*   Updated: 2024/10/31 14:00:46 by fboulbes         ###   ########.fr       */
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

#endif
