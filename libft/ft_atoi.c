/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:52:43 by jsankari          #+#    #+#             */
/*   Updated: 2020/06/30 12:58:09 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s)
{
	int i;
	int rslt;
	int neg;

	i = 0;
	neg = 1;
	rslt = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			neg = -1;
		i++;
	}
	while (s[i] != '\0' && s[i] >= 48 && s[i] <= 57)
	{
		rslt = rslt * 10 + (s[i] - 48);
		i++;
	}
	rslt = rslt * neg;
	return (rslt);
}
