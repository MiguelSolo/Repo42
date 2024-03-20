/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:17:25 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/14 16:19:20 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_search_head(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] != s1[i])
		{
			i = 0;
			break ;
		}
		i++;
	}
	return (i);
}

size_t	ft_search_tail(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	i = 0;
	while (set[i])
	{
		if (set[i - 1 - i] != s1[i - 1 - i])
		{
			i = 0;
			break ;
		}
		i++;
	}
	len = (ft_strlen(s1) - i) - ft_search_head(s1, set);
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;

	trim = ft_substr(s1, ft_search_head(s1, set), ft_search_tail(s1, set));
	return (trim);
}
