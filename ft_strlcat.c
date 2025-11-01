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
	size_t	res;

	i = 0;
	j = 0;
	res = 0;
	while (src[j])
		j++;
	while (i < size && dst[i])
		i++;
	res = i + j;
	j = 0;
	if (i < size)
	{
		while (i < size - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (res);
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
