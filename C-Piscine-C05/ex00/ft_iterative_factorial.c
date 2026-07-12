/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:29:42 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/13 00:31:52 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

// nb negatifse	 0 döner
// nb sıfırsa sonuç 1 kalır
// döngü 1 den nb'ye kadar sayar
// her adımda result çarpılır
// sonunda result döndürülür
