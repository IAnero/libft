/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:25:37 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:27:58 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		count;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
