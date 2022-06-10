/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:18:29 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/09 11:41:11 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int		i;
	char				*rslt;

	i = 0;
	rslt = ft_strdup(s);
	if (rslt == NULL)
		return (NULL);
	while (rslt[i] != '\0')
	{
		rslt[i] = f(s[i]);
		i++;
	}
	return (rslt);
}
