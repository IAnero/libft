/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:03:58 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:28:22 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*test;
	size_t	x;

	x = 0;
	test = malloc(nmemb * size);
	if (!test)
		return (0);
	while (x < nmemb * size)
	{
		test[x] = 0;
		x++;
	}
	return (test);
}
