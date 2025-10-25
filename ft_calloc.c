/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:59:35 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/19 15:59:35 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;

	if ((nmemb == 0) || (size == 0))
		return (malloc(0));
	if (!size && (nmemb * size) / size != nmemb)
		return (NULL);
	tab = malloc(nmemb * size);
	if (tab != NULL)
		ft_bzero(tab, size);
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	char	*res = ft_calloc(0, sizeof(char));
	char	*res1 = calloc(0, sizeof(char));
		
	res	= "dsadas";
	res1 = "qweqweq";
	printf("%s\n", res);
	printf("%s\n", res1);
	free(res1);
	free(res);
	return (0);
}*/
