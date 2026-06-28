/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 03:40:09 by buoksuz           #+#    #+#             */
/*   Updated: 2026/06/28 14:42:22 by buoksuz          ###   ########.fr       */
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
			if ((col == 1 && row == 1) || (col == y && row == x
					&& row != 1 && col != 1))
				ft_putchar('/');
			else if ((col == 1 && row == x) || (col == y && row == 1))
				ft_putchar('\\');
			else if ((row == 1 || row == x) || (col == 1 || col == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
