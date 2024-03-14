/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:43:38 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/14 15:19:34 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*ptr_d;
	char	*ptr_c;

	i = 0;
	ptr_d = (char *) dst;
	ptr_c = (char *) src;
	while (n > 0)
	{
		ptr_d[i] = ptr_c[i];
		i++;
		n--;
	}
}
