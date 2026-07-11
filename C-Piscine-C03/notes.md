# ft_strcmp, ft_strncmp, ft_strcat, ft_strncat, ft_strstr, ft_strlcat

## ft_strcmp

```c
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
```

- `i = 0;` → Sayaç sıfırlanır.
- `while (s1[i] != '\0' || s2[i] != '\0')` → İki stringden biri bitene kadar döner.
- `if (s1[i] != s2[i])` → Karakterler farklıysa.
- `return ((unsigned char)s1[i] - (unsigned char)s2[i]);` → Fark değerini döner. `unsigned char` cast'i negatif karakterler için doğru sonuç verir.
- `i++;` → Sonraki karaktere geçer.
- `return (0);` → Döngü bitti, stringler eşit demektir.

---

## ft_strncmp

```c
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
```

- `i = 0;` → Sayaç sıfırlanır.
- `while (i < n && (...))` → n karaktere ulaşana veya string bitene kadar döner.
- `if (s1[i] != s2[i])` → Karakterler farklıysa fark döner.
- `i++;` → Sonraki karaktere geçer.
- `return (0);` → n karakter eşit çıktıysa 0 döner.

---

## ft_strcat

```c
static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
```

- `ft_strlen(s)` → Yardımcı fonksiyon, string'in `\0`'a kadar uzunluğunu sayar.
- `i = ft_strlen(dest);` → dest'in mevcut uzunluğu, eklemeye buradan başlanacak.
- `j = 0;` → src için ayrı sayaç.
- `while (src[j] != '\0')` → src bitene kadar döner.
- `dest[i + j] = src[j];` → src'nin karakterini dest'in sonundan itibaren kopyalar.
- `j++;` → Sonraki karaktere geçer.
- `dest[i + j] = '\0';` → Döngü bitince stringi sonlandırır.
- `return (dest);` → dest'in adresini döner.

---

## ft_strncat

```c
static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && (unsigned int)j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
```

- `i = ft_strlen(dest);` → dest'in mevcut uzunluğu.
- `j = 0;` → src için sayaç.
- `while (src[j] != '\0' && (unsigned int)j < nb)` → src bitmediği VE nb sınırı aşılmadığı sürece döner.
- `dest[i + j] = src[j];` → Karakteri kopyalar.
- `j++;` → Sonraki karaktere geçer.
- `dest[i + j] = '\0';` → Kopyalanan kısmın sonuna `\0` koyar.
- `return (dest);` → dest'in adresini döner.

---

## ft_strstr

```c
static int	ft_strncmp(char *s1, char *s2, int n)
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

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
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
```

- `ft_strncmp` (yardımcı) → n karaktere kadar karşılaştırır, farklıysa 1, aynıysa 0 döner.
- `ft_strlen` (yardımcı) → to_find'ın uzunluğunu sayar.
- `if (to_find[0] == '\0')` → Aranan string boşsa, str'nin başlangıcı döner (strstr kuralı).
- `len = ft_strlen(to_find);` → Aranan stringin uzunluğu.
- `i = 0;` → str üzerinde gezinme sayacı.
- `while (str[i] != '\0')` → str bitene kadar döner.
- `if (ft_strncmp(&str[i], to_find, len) == 0)` → O konumdan itibaren to_find eşleşiyorsa.
- `return (&str[i]);` → Eşleşmenin başladığı adresi döner.
- `i++;` → Sonraki karaktere geçer.
- `return (0);` → Hiç eşleşme bulunamadıysa NULL döner.

---

## ft_strlcat

```c
static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	i;

	dlen = ft_strlen(dest);
	i = 0;
	if (size <= dlen)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && dlen + i + 1 < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + ft_strlen(src));
}
```

- `dlen = ft_strlen(dest);` → dest'in mevcut uzunluğu.
- `i = 0;` → src için sayaç.
- `if (size <= dlen)` → dest zaten size sınırını doldurmuş/aşmışsa, hiçbir şey kopyalanmaz.
- `return (size + ft_strlen(src));` → Bu durumda strlcat kuralına göre `size + src uzunluğu` döner.
- `while (src[i] != '\0' && dlen + i + 1 < size)` → src bitmediği VE dest'te `\0` için yer kaldığı sürece döner.
- `dest[dlen + i] = src[i];` → Karakteri dest'in sonuna kopyalar.
- `i++;` → Sonraki karaktere geçer.
- `dest[dlen + i] = '\0';` → Kopyalanan kısmı sonlandırır.
- `return (dlen + ft_strlen(src));` → Toplam olması gereken uzunluğu döner (kesilse bile).
