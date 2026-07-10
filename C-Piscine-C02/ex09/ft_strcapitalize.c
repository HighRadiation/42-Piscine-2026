/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 18:51:56 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/09 16:53:48 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n_word;

	i = 0;
	n_word = 1;
	while (str[i])
	{
		if (is_alpha(str[i]))
		{
			if (n_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!n_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			n_word = 0;
		}
		else if (is_digit(str[i]))
			n_word = 0;
		else
			n_word = 1;
		i++;
	}
	return (str);
}
