/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:04:50 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/17 14:04:50 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (src_len + size);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*#include <bsd/string.h>
#include <stdio.h>
int	main()
{
	char dst[8] = "hello";
	char *src = "world";
	char dst2[8] = "hello";
	size_t size = 10;

	size_t res_nativ = strlcat(dst, src, size);
	size_t res_mine = ft_strlcat(dst2, src, size);

	printf("%zu\n", res_nativ);
	printf("%zu\n", res_mine);
	return (0);
}*/
