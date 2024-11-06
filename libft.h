/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:00:58 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/06 11:47:03 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

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
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			ft_lstnew(void *content);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void*));

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
