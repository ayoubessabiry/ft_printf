/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:47:06 by aessabir          #+#    #+#             */
/*   Updated: 2021/12/08 13:45:42 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(void *p)
{
	unsigned long	n;
	int				count;
	int				rem;
	int				i;
	char			str[20];

	count = 0;
	rem = 0;
	i = 0;
	n = (unsigned long) p;
	if (n == 0)
		return (ft_putstr("0x0"));
	while (n)
	{
		rem = n % 16;
		if (rem < 10)
			str[i++] = rem + 48;
		else if (rem >= 10)
			str[i++] = rem + 87;
		n /= 16;
	}
	write(1, "0x", 2);
	while (i--)
		count += ft_putchar(str[i]);
	return (count + 2);
}
