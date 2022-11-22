/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:20:13 by afrigger          #+#    #+#             */
/*   Updated: 2022/10/21 14:06:38 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

void	ft_hexval(unsigned int n, const char form)
{
	if (n >= 16)
	{
		ft_hexval(n / 16, form);
		ft_hexval(n % 16, form);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + 48);
		else
		{
			if (form == 'x')
				ft_putchar(n - 10 + 'a');
			if (form == 'X')
				ft_putchar(n - 10 + 'A');
		}
	}
}

int	ft_printhex(unsigned int n, const char form)
{
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		ft_hexval(n, form);
	return (ft_hexlen(n));
}
