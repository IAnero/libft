/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:35:46 by herrakot          #+#    #+#             */
/*   Updated: 2024/09/17 14:44:32 by herrakot         ###   ########.fr       */
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
