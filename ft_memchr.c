/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:47:38 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/01 18:23:01 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int		i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/* 
int	main(void)
{
	printf("%s", ft_memchr("Hello, World!", 'o', 13));
	printf("%s", memchr("Hello, World!", 'o', 13));
	return (0);
}
 */