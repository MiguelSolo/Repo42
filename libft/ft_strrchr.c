/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:50:12 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/12 19:55:26 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = sizeof(s);
	while (len >= 1)
	{
		if (s[len - 1 - i] == c)
			return (s[i]);
		len--;
	}
	return (0);
}