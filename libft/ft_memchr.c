/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:05:32 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/13 17:36:01 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	int		i;

	while (n)
	{
		if (p[i] == c)
			return (p[i]);
		n--;
	}
	return (0);
}