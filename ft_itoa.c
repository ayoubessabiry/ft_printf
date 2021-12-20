/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:18:25 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/20 18:59:37 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc(sizeof(char) * ft_strlen((char *)s1) + 1);
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static int	lent(int n)
{
	int	i;

	i = 0;
	if (n == 0 || n < 0)
		i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = lent(n);
	num = malloc(sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n != 0 && len >= 0)
	{
		num[len-- - 1] = n % 10 + 48;
		n /= 10;
	}
	return (num);
}
