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
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		j = 0;
		while ((big[i] == little[j]) && (i < len))
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i - j]);
		}
		i++;
	}
	return (NULL);
}

#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char *str;
	char *big = "supravim n'est pas un IDE";
	char *little = "vim";
	
	str = ft_strnstr(big, little, 8);
	
	printf("%s", str);
	return (0);
}
