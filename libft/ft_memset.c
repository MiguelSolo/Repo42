/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:01:24 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/13 16:25:47 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) str;
	while (len > 0)
	{
		ptr[i] = (unsigned char) c;
		i++;
		len--;
	}
}
