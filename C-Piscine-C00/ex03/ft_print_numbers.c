/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 18:34:13 by buoksuz           #+#    #+#             */
/*   Updated: 2026/06/30 17:44:23 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	*digits;
	int		i;

	i = 0;
	digits = "0123456789";
	while (digits[i])
	{
		ft_putchar(digits[i]);
		i++;
	}
}
