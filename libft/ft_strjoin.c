/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 18:26:42 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/08 17:12:40 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	int		lens1;
	int		lens2;
	char	*rslt;

	i = 0;
	x = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!(rslt = (char*)malloc(sizeof(char) * (lens1 + lens2 + 1))))
		return (NULL);
	while (i < lens1)
	{
		rslt[i] = s1[i];
		i++;
	}
	while (i < (lens1 + lens2))
	{
		rslt[i] = s2[x];
		i++;
		x++;
	}
	rslt[i] = '\0';
	return (rslt);
}
