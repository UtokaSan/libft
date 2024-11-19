/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42perpignan.>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:17:16 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/08 19:31:49 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
void	ft_putchar(unsigned int i, char *c)
{
	(void)i;
	write(1, c, 1);
}
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
int	main(void)
{
	ft_striteri("Hello, World!", ft_putchar);
}
 */