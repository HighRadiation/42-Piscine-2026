/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 03:40:11 by buoksuz           #+#    #+#             */
/*   Updated: 2026/06/28 14:43:26 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (col <= y && x > 0)
	{
		row = 1;
		while (row <= x)
		{
			if (col == 1 && (row == 1 || row == x))
				ft_putchar('A');
			else if (col == y && (row == 1 || row == x))
				ft_putchar('C');
			else if ((row == 1 || row == x) || (col == 1 || col == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
