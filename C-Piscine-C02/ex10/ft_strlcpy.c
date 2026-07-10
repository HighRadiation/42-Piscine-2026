/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 19:00:41 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/10 19:03:13 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	int i;

	i = 0;
	while (size < i && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	return (size);
}
