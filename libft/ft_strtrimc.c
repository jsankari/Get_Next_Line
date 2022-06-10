/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 12:44:13 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/08 14:30:28 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimc(char const *s, int c)
{
	char	*rslt;
	int		a;
	int		o;

	a = 0;
	o = (ft_strlen(s) - 1);
	while (s[a] == c && s[a] != '\0')
	{
		a++;
	}
	while (s[o] == c && o > a)
	{
		o--;
	}
	rslt = ft_strsub(s, a, (o - a + 1));
	return (rslt);
}
