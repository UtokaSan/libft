/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:11:20 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/08 19:29:34 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_convert(char *str, int n, size_t len)
{
	size_t	nb;

	nb = n;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len] = '\0';
	while (nb > 0)
	{
		len--;
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		nb;

	nb = n;
	len = 0;
	if (n <= 0)
		len = 1;
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_convert(str, n, len);
	return (str);
}

int	main(void)
{
	printf("%s", ft_itoa(1234));
	return (0);
}
