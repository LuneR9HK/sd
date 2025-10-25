/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:53:57 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/17 18:53:57 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main(int argc, char **argv)
// {
	// (void)argc;
// 
	// size_t n = 5;
	// 
	// int res = ft_strncmp(argv[1], argv[2], n);
	// 
	// printf("%d\n", res);
	// printf("%d\n", strncmp(argv[1], argv[2], n));
	// return (0);
// }
