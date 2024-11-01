/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:32:54 by fboulbes          #+#    #+#             */
/*   Updated: 2024/10/31 20:40:30 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}

/* 
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[] = "Goodbye, World!";

	ft_memmove(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
 */