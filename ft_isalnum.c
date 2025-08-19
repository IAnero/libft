/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:29:13 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:28:23 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (8);
	else if (c >= 'A' && c <= 'Z')
		return (8);
	else if (c >= '0' && c <= '9')
		return (8);
	else
		return (0);
}
