/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42perpignan.>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:55:33 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/08 19:30:45 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		((unsigned char *)pointer)[i++] = (unsigned char)value;
	return (pointer);
}

/* 
int	main(void)
{
	char	str[] = "Hello, World!";
	ft_memset(str, 'X', 5);
	printf("%s\n", str);
	return (0);
}
*/