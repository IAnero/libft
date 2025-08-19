/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:25:58 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:28:37 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		x;

	x = 0;
	str = (const char *)s;
	while (x < n)
	{
		if (str[x] == (char)c)
		{
			return ((void *)str + x);
		}
		x++;
	}
	return (NULL);
}
