/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:44:55 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/13 17:36:39 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_stpcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}