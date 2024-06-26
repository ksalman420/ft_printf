/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:05:38 by ksalman           #+#    #+#             */
/*   Updated: 2024/04/09 09:03:09 by ksalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Prints a string
#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
