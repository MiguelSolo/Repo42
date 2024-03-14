/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:23:34 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/14 18:00:38 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**new_subs(char const *s, char c, char **split)
{
	int	i;
	int	num;
	int	beg;

	i = 0;
	num = 0;
	beg = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			split[num] = ft_substr(s, beg, i - beg);
			beg = i;
			num++;
		}
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		w_count;

	w_count = count_words(s, c);
	split = (char **)malloc(w_count * sizeof(char *));
	return (new_subs(s, c, split));
}
