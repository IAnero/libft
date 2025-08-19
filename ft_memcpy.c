/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:08:16 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:28:44 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	x;

	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	x = 0;
	if (!tmp_src && !tmp_dest)
		return (tmp_dest);
	while (n > 0)
	{
		tmp_dest[x] = tmp_src[x];
		x++;
		n--;
	}
	return (tmp_dest);
}
