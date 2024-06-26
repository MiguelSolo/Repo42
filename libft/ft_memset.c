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

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) str;
	while (i < len)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
