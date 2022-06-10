/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 19:51:12 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/08 11:38:03 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*rslt;
	int		a;
	int		o;

	a = 0;
	o = (ft_strlen(s) - 1);
	while ((s[a] == ' ' || s[a] == '\n' || s[a] == '\t') && s[a] != '\0')
	{
		a++;
	}
	while ((s[o] == ' ' || s[o] == '\n' || s[o] == '\t') && o > a)
	{
		o--;
	}
	rslt = ft_strsub(s, a, (o - a + 1));
	return (rslt);
}
