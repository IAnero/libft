/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:36:06 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:29:02 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
		i++;
	j = i;
	while (i + 1 < size && src[i - j])
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	while (src[i - j])
		i++;
	return (i);
}
