/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:48:09 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/06 11:08:12 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	while ((*lst)->next != NULL)
	{
		(*lst) = (*lst)->next;
	}
	(*lst)->next = new;
}
