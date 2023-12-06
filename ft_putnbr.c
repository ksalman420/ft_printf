/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:12:22 by ksalman           #+#    #+#             */
/*   Updated: 2023/12/06 14:16:14 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		pnbr(n / 10);
		pnbr(n % 10);
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
	}
}

int	ft_putnbr(int n)
{
	int	i;
	int	tmp;

	tmp = n;
	i = 0;
	if (n == -2147483648)
	{
		pnbr(n);
		return (11);
	}
	if (n < 0)
	{
		tmp = -tmp;
		i++;
	}
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		i++;
	}
	pnbr(n);
	i++;
	return (i);
}
