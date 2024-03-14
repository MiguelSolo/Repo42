/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:31:35 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/12 16:36:55 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) s;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}
