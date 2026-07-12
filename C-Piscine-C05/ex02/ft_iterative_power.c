/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:34:47 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/13 00:35:39 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

// power negatifse 0 döner
// result başta 1
// döngü power kadar döner
// her adımda result nb ile çarpılacak
// sonunda result döndürülecek
