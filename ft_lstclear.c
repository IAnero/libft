/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:38:17 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:36:59 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = *lst;
	while (current)
	{
		*lst = current;
		current = current->next;
		del((*lst)->content);
		free (*lst);
	}
	*lst = NULL;
}
