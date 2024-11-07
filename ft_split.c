/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboulbes <fboulbes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:04 by fboulbes          #+#    #+#             */
/*   Updated: 2024/11/07 15:47:30 by fboulbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	*ft_search_charset(char c, char *str)
{
	int	i;
	int	*pos;
	int	count;

	i = 0;
	count = 0;
	pos = malloc((ft_strlen(str) + 1) * sizeof(int));
	while (str[i] != '\0')
	{
		if (str[i] == c)
			pos[count++] = i;
		i++;
	}
	pos[count] = -1;
	return (pos);
}

void	ft_cut_string(char **result, char *str, int *pos)
{
	int	i;
	int	start;
	int	len;

	i = 0;
	start = 0;
	while (pos[i] != -1)
	{
		len = pos[i] - start;
		result[i] = malloc((len + 1) * sizeof(char));
		if (result[i] == NULL)
			return ;
		ft_strncpy(result[i], str + start, len);
		result[i][len] = '\0';
		start = pos[i] + 1;
		i++;
	}
	len = ft_strlen(str + start);
	result[i] = malloc((len + 1) * sizeof(char));
	if (result[i] == NULL)
		return ;
	ft_strncpy(result[i], str + start, len);
	result[i][len] = '\0';
	result[i + 1] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		*pos;
	int		count;
	char	**result;

	if (!s)
		return (NULL);
	count = 0;
	pos = ft_search_charset(c, s);
	if (pos == NULL)
		return (NULL);
	while (pos[count] != -1)
		count++;
	result = malloc((count + 1) * sizeof(char *));
	if (result == NULL)
	{
		free(pos);
		return (NULL);
	}
	ft_cut_string(result, s, pos);
	free(pos);
	return (result);
}

/* 
int	main(void)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split("Salut Tu vas bien-sss", ' ');
	while (str[i] != NULL)
	{
		printf("[%s]\n", str[i]);
		i++;
	}
	free(str);
	return (0);
}
 */