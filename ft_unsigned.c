/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:49:23 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/21 19:47:53 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	lent(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_utoa(unsigned int n)
{
	char	*num;
	int		len;

	len = lent(n);
	num = malloc(sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	while (n != 0 && len >= 0)
	{
		num[len-- - 1] = n % 10 + 48;
		n /= 10;
	}
	return (num);
}

int	ft_unsigned(unsigned int n)
{
	char	*s;
	int		len;

	s = ft_utoa(n);
	len = ft_putstr(s);
	free(s);
	return (len);
}
