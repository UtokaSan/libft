/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:40:24 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/05 14:19:06 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char const *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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