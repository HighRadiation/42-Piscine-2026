/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 03:40:15 by buoksuz           #+#    #+#             */
/*   Updated: 2026/06/28 03:52:51 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((col == 1 && row == 1) || (col == y && row == x && row != 1
					&& col != 1))
				ft_putchar('A');
			else if ((col == 1 && row == x) || (col == y && row == 1))
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
