/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessabir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:51:05 by aessabir          #+#    #+#             */
/*   Updated: 2021/11/21 19:48:26 by aessabir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_itoa(n);
	i = ft_putstr(s);
	free(s);
	return (i);
}
