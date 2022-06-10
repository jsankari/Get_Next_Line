/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:37:01 by jsankari          #+#    #+#             */
/*   Updated: 2022/06/10 17:50:37 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int			main(void)
{
	char	*line;
	char	*file;
	int		fd;
	int		fn;
	int		ln;
	int 	x;
	
	fn = 1;
	x = 1;
	line = NULL;
	printf("--------------------------\nSTART\n");
	while (fn <= 22)
	{
		file = ft_itoa(fn);
		file = ft_strjoin("basic_test_files/", file);
		fd = open(file, O_RDONLY);
		ln = 0;
		printf("--------------------------\n");
		while ((x = get_next_line(fd, &line)))
		{
			printf("[%2d ]%s\n", x, line);
			ft_strdel(&line);
			ln++;
			if (x == -1)
				break ;
		}
		printf("[%2d ]%s\n", x, line);
		printf("File %d tested. Number of lines %d\n", fn, ln);
		fn++;
	}
	/*
	** Leaks loop
	*/
/*
	while (1)
	{
	}
*/
	printf("--------------------------\nDONE\n");
	return (0);
}
