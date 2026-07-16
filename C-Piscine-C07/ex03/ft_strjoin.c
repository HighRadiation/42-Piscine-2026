/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buoksuz@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:48:56 by buoksuz           #+#    #+#             */
/*   Updated: 2026/07/16 06:09:24 by buoksuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

void	fill_res(char *res, int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_memcpy(res + j, strs[i], ft_strlen(strs[i]));
		j += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_memcpy(res + j, sep, ft_strlen(sep));
			j += ft_strlen(sep);
		}
		i++;
	}
	res[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total;

	total = total_len(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (total + 1));
	if (!res)
		return (NULL);
	fill_res(res, size, strs, sep);
	return (res);
}

// ---------------------------------------------------------------------------
// SATIR SATIR ACIKLAMA
// ---------------------------------------------------------------------------

// ft_strlen(str)
// i = 0;                     -> sayac sifirlanir
// while (str[i] != '\0')     -> string bitene kadar doner
//     i++;                   -> her karakterde sayac 1 artar
// return (i);                -> toplam karakter sayisi (uzunluk) donulur

// ft_memcpy(dst, src, n)
// i = 0;                                 -> sayac sifirlanir
// while (i < n)                          -> n byte kopyalanana kadar doner
//     dst[i] = src[i]                    -> src'deki byte, dst'ye tek tek yazilir
//     i++;                               -> sayac artar
// return (dst);                          -> hedefin (dst) basi donulur

// total_len(size, strs, sep)
// total = 0; i = 0;                      -> toplam uzunluk ve sayac sifirlanir
// while (i < size)                       -> strs dizisindeki her string icin
//     total += ft_strlen(strs[i]);       -> o stringin uzunlugu toplama eklenir
//     if (i < size - 1)                  -> son string degilse (aralarina sep girecekse)
//         total += ft_strlen(sep);       -> sep'in uzunlugu de toplama eklenir
//     i++;                               -> sonraki stringe gecilir
// return (total);                        -> res icin gereken toplam karakter sayisi donulur

// fill_res(res, size, strs, sep)
// i = 0; j = 0;                                          -> i: strs indexi, j: res'e yazma konumu
// while (i < size)                                       -> her string icin
//     ft_memcpy(res + j, strs[i], ft_strlen(strs[i]));   -> strs[i], res'in j. konumundan itibaren kopyalanir
//     j += ft_strlen(strs[i]);                           -> j, kopyalanan kadar ileri gider
//     if (i < size - 1)                                  -> son eleman degilse
//         ft_memcpy(res + j, sep, ft_strlen(sep));       -> araya sep de kopyalanir
//         j += ft_strlen(sep);                           -> j, sep kadar daha ileri gider
//     i++;                                                -> sonraki stringe gecilir
// res[j] = '\0';                                          -> kopyalama bitince string sonlandirilir

// ft_strjoin(size, strs, sep)
// total = total_len(size, strs, sep);    -> res icin kac byte lazim, hesaplanir
// res = malloc(total + 1);               -> +1, '\0' icin ekstra 1 byte
// if (!res) return (NULL);               -> malloc basarisiz olursa hata donulur
// fill_res(res, size, strs, sep);        -> res, strs ve sep ile dolduruluyor
// return (res);                          -> hazir string, cagirana donuluyor
