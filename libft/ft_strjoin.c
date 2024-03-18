/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:54:24 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/13 18:14:18 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 == NULL)
		return (0);
	s3[ft_strlen(s1) + ft_strlen(s2) + 1] = '\0';
	s3 = ft_strcat(s1, s2);

	return (s3);
}
