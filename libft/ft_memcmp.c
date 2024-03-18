/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:13:10 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/13 17:36:14 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*p1;
	char			*p2;
	unsigned int	i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while ((i < n) && (p1[i] || p2[i]))
	{
		if (p1[i] > p2[i])
			return (1);
		else if (p1[i] < p2[i])
			return (-1);
		i++;
	}
	return (0);
}
