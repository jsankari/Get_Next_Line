/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 20:26:05 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/07 15:34:30 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char				**rslt;
	unsigned int		i;
	unsigned int		wrdcnt;
	unsigned int		x;

	i = 0;
	x = 0;
	wrdcnt = ft_countstring(s, c);
	if (!(rslt = (char**)malloc(sizeof(char*) * (wrdcnt + 1))))
		return (NULL);
	while (x < wrdcnt)
	{
		while (s[i] == c)
			i++;
		if (i == 0 || (s[i] != c && s[i] != '\0'))
		{
			rslt[x] = ft_strsub(s, i, (ft_wordlen(s + i, c)));
			i += ft_wordlen(s + i, c);
			x++;
		}
	}
	rslt[x] = NULL;
	return (rslt);
}
