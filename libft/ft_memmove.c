/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:55:43 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/12 18:47:50 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*ptr_d;
	char	*ptr_c;

	i = 0;
	ptr_d = (char *) dst;
	ptr_c = (char *) src;
	if (ptr_d < ptr_c)
	{
		i = 0;
		while (i < len)
		{
			ptr_d[i] = ptr_c[i];
			i++;
		}
	}
	else
	{
		while (len)
		{
			ptr_d[len] = ptr_c[len];
			len--;
		}
	}
}
