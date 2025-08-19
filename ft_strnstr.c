/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:36:30 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:29:09 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (little[x] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		x = 0;
		while (big[i + x] == little[x] && i + x < len)
		{
			if (big[i + x] == little[x] && little[x + 1] == '\0')
			{
				return ((char *)(big + i));
			}
			x++;
		}
		i++;
	}
	return (NULL);
}
