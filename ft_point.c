/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:34:10 by ksalman           #+#    #+#             */
/*   Updated: 2023/12/05 18:17:12 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_point(void *ptr)
{
	if (ptr == 0)
		ft_putstr("(nil)");
	else
	{
		ft_putstr("0x");
		ft_puthex((unsigned long long)ptr, 'x');
	}
}