/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:53:20 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/21 19:45:48 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(char c, unsigned int n)
{
	char			hexa[100];
	int				j;
	int				len;
	unsigned int	rem;

	rem = 0;
	j = 0;
	len = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n)
	{
		rem = n % 16;
		if (rem < 10)
			hexa[j++] = rem + 48;
		else if (rem >= 10 && c == 'X')
			hexa[j++] = rem + 55;
		else
			hexa[j++] = rem + 87;
		n /= 16;
	}
	hexa[j] = '\0';
	while (j--)
		ft_putchar(hexa[j]);
	return (ft_strlen(hexa));
}
