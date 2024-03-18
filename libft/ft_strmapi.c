/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:03:00 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/18 17:03:00 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char *dest;
	int	len;

	i = 0;
	len = ft_strlen(s);
	dest = malloc((len + 1) * sizeof(char));
	if (!s)
		return (0);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++; 
	}
	dest[i] = '\0';
	return (dest);
}