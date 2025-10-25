/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:46:56 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/16 16:46:56 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!src)
		return (0);
	if (src_len < size)
		return (src_len);
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	dst_len = ft_strlen(dst);
	return (dst_len);
}
/*
#include <stdio.h>
int	main()
{
	char tab[15] = "";
	char *src = "world";
	size_t n = 3;
	
	size_t res = ft_strlcpy(tab, src, n);

	printf("%s\n", tab);
	printf("%zu\n", res);
	
	return (0);
}*/
