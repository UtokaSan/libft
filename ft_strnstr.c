/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:50:27 by fboulbes          #+#    #+#             */
/*   Updated: 2024/10/31 20:56:04 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 
// #include <string.h>

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
			j++;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)&big[i - j]);
}

/* 
int	main(void)
{
	printf("%s", ft_strnstr("Hello, World!", "World", 13));
	printf("%s", strnstr("Hello, World!", "World", 13));
	return (0);
}
 */