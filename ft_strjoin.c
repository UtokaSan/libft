/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:40:24 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/08 19:31:57 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		length_strs;

	if (!s1 || !s2)
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	length_strs = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(length_strs + 1);
	new_str[0] = '\0';
	ft_strcat(new_str, s1);
	ft_strcat(new_str, s2);
	return (new_str);
}
/* 
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "Hello";
	s2 = "World";
	result = ft_strjoin(s1, s2);
	printf("%s\n", result);
	free(result);
	return (0);
}
 */