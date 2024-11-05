/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:04:47 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/05 13:49:57 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *pointer, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		((unsigned char *)pointer)[i++] = 0;
}

/*  
int	main(void)
{
    char	str[] = "Hello, World!";
    ft_bzero(str, 5);
    printf("%s\n", str);
    return (0);
}
 */