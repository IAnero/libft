/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:35:46 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:28:56 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	result;
	int		x;

	x = 0;
	result = c;
	if (result == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[x] != '\0')
	{
		if (s[x] == result)
		{
			return ((char *)s + x);
		}
		x++;
	}
	return (NULL);
}
