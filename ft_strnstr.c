/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:26:12 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/18 19:26:12 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (*big && i < len)
	{
		j = 0;
		while (big[j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big);
		}
		big++;
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	char *str;

	str = (char *)strnstr(argv[1], argv[2], atoi(argv[3]));

	printf("%s\n", (char *)ft_strnstr(argv[1], argv[2], atoi(argv[3])));

	printf("%s\n", str);
	return (0);
}
*/
