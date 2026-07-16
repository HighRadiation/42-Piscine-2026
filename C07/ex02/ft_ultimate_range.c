/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utlimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:41 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/16 11:28:53 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    size = max - min;
    *range = (int *)malloc(sizeof(int) * size);
    if (*range == NULL)
        return (-1);
    i = 0;
    while (i < size)
    {
        (*range)[i] = min + i;
        i++;
    }
    return (size);
}
