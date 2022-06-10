/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:09:42 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/08 17:10:37 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;

	i = 0;
	if (s1 || s2)
	{
		while (s1[i] && s2[i] && s1[i] == s2[i])
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	else
		return (0);
}
