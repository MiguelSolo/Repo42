/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:02:16 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/14 18:53:23 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_counter(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = digit_counter(n);
	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
	{
		str[len - 1] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[len - i - 1] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	return (str);
}
