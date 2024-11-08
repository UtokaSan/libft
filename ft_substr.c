/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:49:44 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/08 19:33:05 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	len_s;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		new_str[i] = s[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* 
int	main(void)
{
	printf("%s", ft_substr("hello", 0, 2));
	return (0);
}
 */