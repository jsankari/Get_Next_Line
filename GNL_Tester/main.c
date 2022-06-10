/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:37:01 by jsankari          #+#    #+#             */
/*   Updated: 2022/06/10 17:00:27 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int			main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		ln;
	int 	x;
	
	x = 1;
    if (ac < 2 || ac > 3)
    {
        printf("ERROR: Amount of arguments should be 1 if testing without loop and 2 if testing with loop.");
        return (0);
    }
    
    line = NULL;
	printf("--------------------------\nTesting file given in argument.\n");
	{
		if (ac == 3)
			fd = open(av[2], O_RDONLY);
		if (ac == 2)
			fd = open(av[1], O_RDONLY);
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
		printf("File tested. Number of lines %d\n", ln);
	}
	if (ft_strcmp(av[1], "loop") == 0)
	{
		while (1)
		{
		}
	}
	printf("--------------------------\nDONE\n");
	return (0);
}
