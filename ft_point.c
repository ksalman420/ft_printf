/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:34:10 by ksalman           #+#    #+#             */
/*   Updated: 2023/12/06 15:56:55 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_point(void *ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		i = ft_putstr("(nil)");
	else
	{
		i = ft_putstr("0x");
		i = i + ft_puthex((unsigned long)ptr, 'x');
	}
	return (i);
}
