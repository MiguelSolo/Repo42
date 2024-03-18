/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:00:06 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/13 18:15:38 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(len) + 1;
	if (sub == NULL)
		return (0);
	sub[len + 1] = '\0';
	while (sub[i])
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
