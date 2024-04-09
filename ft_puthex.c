/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:20:29 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 09:04:05 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Prints an integer in the hexadecimal system
#include "ft_printf.h"

void	phex(unsigned long n, char type)
{
	if (n >= 16)
	{
		phex(n / 16, type);
		phex(n % 16, type);
	}
	if (n < 16)
	{
		if (n < 10)
		{
			ft_putchar(n + 48);
		}
		else
		{
			if (type == 'x')
				ft_putchar(n - 10 + 'a');
			else
				ft_putchar(n - 10 + 'A');
		}
	}
}

int	ft_puthex(unsigned long n, char type)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = ft_putchar('0');
		return (i);
	}
	phex(n, type);
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}
