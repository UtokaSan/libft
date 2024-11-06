/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:39:00 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/05 20:46:47 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
