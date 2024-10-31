/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:03:20 by fboulbes          #+#    #+#             */
/*   Updated: 2024/10/31 14:06:54 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i] != (char)searchedChar)
		i++;
	return ((char *)string + i);
}

/* 
int	main(void)
{
	printf("%s", ft_strchr("Hello World", 'o'));
	return (0);
}
 */
