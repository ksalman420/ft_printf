/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:20:29 by ksalman           #+#    #+#             */
/*   Updated: 2023/12/05 17:33:16 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char type)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, type);
		ft_puthex(n % 16, type);
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
