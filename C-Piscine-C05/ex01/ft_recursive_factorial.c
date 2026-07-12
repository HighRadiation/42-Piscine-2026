/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:32:34 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/13 00:33:59 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// nb negatifse 0 döner
// nb sıfırsa  1 döner
// diğer durumlarda kendini çağırır
// her çağrı nb'yi 1 azaltır
// sonuçlar çarpılarak geri döner
