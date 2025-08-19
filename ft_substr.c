/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrakot <herrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:17:47 by herrakot          #+#    #+#             */
/*   Updated: 2025/02/14 17:29:13 by herrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ss;
	size_t			a;

	a = 0;
	if (!s)
		return (NULL);
	if (len > (unsigned int)ft_strlen(s) - start)
		len = (unsigned int)ft_strlen(s) - start;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	ss = malloc (sizeof (char) * len + 1);
	if (!ss)
		return (NULL);
	while (s[start] != '\0' && a < len)
	{
		ss[a] = s[start];
		a++;
		start++;
	}
	ss[a] = '\0';
	return ((char *)ss);
}
