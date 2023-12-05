/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:45:58 by ksalman           #+#    #+#             */
/*   Updated: 2023/12/05 18:44:13 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	typedetect(va_list args, const char type)
{
	if (type == 'c')
		ft_putchar(va_arg(args, int));
	else if (type == 's')
		ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(args, int));
	else if (type == 'p')
		ft_point(va_arg(args, void *));
	else if (type == 'x' || type == 'X')
		ft_puthex(va_arg(args, unsigned int), type);
	else if (type == 'u')
		ft_unsignedint(va_arg(args, unsigned int));
	else if (type == '%')
		ft_putchar('%');
}

int	ft_printf(const char *toprint, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, toprint);
	while (toprint[i] != 0)
	{
		if (toprint[i] == '%')
		{
			typedetect(args, toprint[i + 1]);
			i++;
		}
		else
			ft_putchar(toprint[i]);
		i++;
	}
	va_end(args);
	return (0);
}
