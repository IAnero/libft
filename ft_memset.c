/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:08:47 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:28:48 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	int		x;
	char	*res;

	res = s;
	x = 0;
	while (x < n)
	{
		res[x] = c;
		x++;
	}
	return (s);
}
