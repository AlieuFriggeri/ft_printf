/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:45:22 by afrigger          #+#    #+#             */
/*   Updated: 2022/10/25 12:45:43 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int nb)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = nb;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(unsigned int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	if (n <= 9 && n >= 0)
		ft_putchar(n + 48);
	return (ft_len(n));
}
