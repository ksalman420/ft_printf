/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:45:58 by ksalman           #+#    #+#             */
/*   Updated: 2023/12/06 14:39:57 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	typedetect(va_list args, const char type)
{
	int	pl;

	pl = 0;
	if (type == 'c')
		pl = pl + ft_putchar(va_arg(args, int));
	else if (type == 's')
		pl = pl + ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		pl = pl + ft_putnbr(va_arg(args, int));
	else if (type == 'p')
		pl = pl + ft_point(va_arg(args, void *));
	else if (type == 'x' || type == 'X')
		pl = pl + ft_puthex(va_arg(args, unsigned int), type);
	else if (type == 'u')
		pl = pl + ft_unsignedint(va_arg(args, unsigned int));
	else if (type == '%')
		pl = pl + ft_putchar('%');
	return (pl);
}

int	ft_printf(const char *toprint, ...)
{
	int		i;
	va_list	args;
	int		pl;

	i = 0;
	va_start(args, toprint);
	pl = 0;
	while (toprint[i] != 0)
	{
		if (toprint[i] == '%')
		{
			pl = pl + typedetect(args, toprint[i + 1]);
			i++;
		}
		else
			pl = pl + ft_putchar(toprint[i]);
		i++;
	}
	va_end(args);
	return (pl);
}
