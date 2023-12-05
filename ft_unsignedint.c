/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:36:05 by ksalman           #+#    #+#             */
/*   Updated: 2023/12/05 16:50:37 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsignedint(unsigned int n)
{
	if (n >= 10)
	{
		ft_unsignedint(n / 10);
		ft_unsignedint(n % 10);
	}
	if (n < 10)
		ft_putchar(n + 48);
}
