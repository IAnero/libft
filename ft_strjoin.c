/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:36:00 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:29:00 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*res;

	i = 0;
	x = 0;
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		res[i] = s2[x];
		i++;
		x++;
	}
	res[i] = '\0';
	return (res);
}
