/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:36:05 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 09:03:25 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Prints an unsigned integer in the decimal system
#include "ft_printf.h"

void	punsignedint(unsigned int n)
{
	if (n >= 10)
	{
		punsignedint(n / 10);
		punsignedint(n % 10);
	}
	if (n < 10)
		ft_putchar(n + 48);
}

int	ft_unsignedint(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = ft_putchar('0');
		return (i);
	}
	punsignedint(n);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
