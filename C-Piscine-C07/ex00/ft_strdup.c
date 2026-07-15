/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 00:59:16 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/16 01:09:23 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}


char	*ft_strdup(char *src)
{
	char	*new_str;
	int 	i;

	i = 0;
	new_str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new_str)
		return (NULL);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int main()
{
	char *str;

	str = "elam";
	printf("%s\n", ft_strdup(str));
}
