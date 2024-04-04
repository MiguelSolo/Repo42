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

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*new_sub(char const *s, char c, int *start)
{
	int		end;
	char	*word;

	while (s[*start] == c)
		(*start)++;
	end = *start;
	while (s[end] && s[end] != c)
		end++;
	word = ft_substr(s, *start, end - *start);
	if (!word)
		return (0);
	*start = end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		w_count;
	int		i;
	int		start;

	if (!s)
		return (0);
	w_count = count_words(s, c);
	split = (char **)malloc((w_count + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	start = 0;
	while (i < w_count)
	{
		split[i] = new_sub(s, c, &start);
		i++;
	}
	split[i] = '\0';
	return (split);
}
