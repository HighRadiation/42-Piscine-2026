/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 18:47:20 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/03 19:09:17 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		n;
	int		c;
	char	a;

	n = nb;
	if (n <= 0)
	{
		if (n == 0)
			ft_putchar('0');
		else
		{
			ft_putchar('-');
			n = -n;
		}
	}
	if (n > 0)
	{
		c = n / 10;
		if (c != 0)
			ft_putnbr(c);
		n = n % 10 + '0';
		a = n;
		printf("char: %c", a);
		ft_putchar(n);
	}
}
