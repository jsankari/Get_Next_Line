/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 15:48:13 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/01 16:15:36 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memset() function writes len bytes of value c
** (converted to an unsigned char) to the string b.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char*)b;
	while (len)
	{
		temp[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
