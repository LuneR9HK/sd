/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:53:25 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/15 17:53:25 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d[i] == '\0' && s[i] == '\0')
		return (d);
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
		return (d);
	}
	else if (i < n)
		ft_memcpy(d, s, n);
	return (d);
}
// int	main()
// {
	// char d[4] = "0123";
	// char s[4] = "0000";
	// char *tmp;
	// size_t n = 3;
// 
	// tmp = ft_memmove(d, s, n);
	// printf("%s \n", tmp);
// 
	// return (0);
// }
