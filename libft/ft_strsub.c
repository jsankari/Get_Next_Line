/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 17:58:11 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/04 18:19:20 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*rslt;

	i = 0;
	rslt = (char*)malloc(sizeof(char) * (len + 1));
	if (rslt == NULL)
		return (NULL);
	while (len)
	{
		rslt[i] = s[start];
		i++;
		start++;
		len--;
	}
	rslt[i] = '\0';
	return (rslt);
}
