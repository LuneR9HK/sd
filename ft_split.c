/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:53:41 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/21 14:53:41 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_w(const char *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			w++;
			while ((s[i] != c) && s[i])
				i++;
		}
	}
	return (w);
}

static void	ft_free_split(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

static int	ft_fill(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	w_index;

	i = 0;
	w_index = 0;
	while (s && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			tab[w_index] = ft_substr(s, start, i - start);
			if (!tab[w_index])
				return (0);
			w_index++;
		}
	}
	tab[w_index] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_count_w(s, c) + 1));
	if (!tab)
		return (NULL);
	if (!ft_fill(tab, s, c))
	{
		ft_free_split(tab);
		tab = NULL;
	}
	return (tab);
}
/*#include <stdio.h>
int	main(void)
{
	const char *str = " hello   world   vive le c";
	char **st;
	char c = ' ';
	int	i = 0;
	int res = ft_count_w(str, c);
	
	st = ft_split(str, c);
	printf("%d\n", res);
	while (i < 5)
		{
			printf("%s\n", st[i]);
			i++;
		}
	return (0);
}*/
