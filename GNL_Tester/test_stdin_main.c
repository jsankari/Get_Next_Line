/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stdin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:37:01 by jsankari          #+#    #+#             */
/*   Updated: 2022/06/10 16:56:05 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int			main(void)
{
	char	*line;
	size_t	ln;
	int		x;

	ln = 0;
	x = 1;
	line = NULL;

	printf("--------------------------\n");
	while ((x = get_next_line(0, &line)))
	{
		printf("[%2d ]%s\n", x, line);
		ft_strdel(&line);
		ln++;
	}
	printf("[%2d ]%s\n", x, line);
	printf("Standard output tested. Number of lines %zu\n", ln);
	printf("--------------------------\nDONE\n");
	return (0);
}
