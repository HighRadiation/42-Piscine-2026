/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 12:03:18 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/11 12:03:34 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (1);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	if (to_find[0] == '\0')
		return (str);
	len = ft_strlen(to_find);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, len) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
