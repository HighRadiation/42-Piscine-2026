/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 17:17:23 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/07 17:34:18 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <unistd.h>
#include <stdlib.h>

int main()
{
	char	*src;
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(3);
	src = "selam";
	ft_strcpy(dest, src);
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
}
