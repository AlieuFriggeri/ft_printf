/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrigger <afrigger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:45:49 by afrigger          #+#    #+#             */
/*   Updated: 2022/10/25 12:48:56 by afrigger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
char	*ft_itoa(int n);
int		ft_printnbr(int n);
int		ft_printhex(unsigned int n, const char form);
int		ft_putperc(char c);
int		ft_printptr(void *n, const char form);
int		ft_putnbr(unsigned int n);

#endif
