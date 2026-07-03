/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 00:17:33 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/04 00:37:03 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// changed the value of x in main to 42
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int	nbr;

	nbr = 10;
	ft_ft(&nbr);
	printf("%d\n", nbr);
}
