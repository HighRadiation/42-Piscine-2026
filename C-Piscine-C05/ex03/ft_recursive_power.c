/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 00:36:11 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/13 00:37:42 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// power negatifse 0 döner
// power sıfırsa 1 döner
// diğer durumda kendini çağırır
// her çağırda power bir azalır
// sonuçlar çarpılır ve geri döner
