/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_multiple_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:37:01 by jsankari          #+#    #+#             */
/*   Updated: 2022/06/10 17:52:03 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int			main(void)
{
	char	*line;
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	int 	x;
	
	x = 1;
	line = NULL;

	fd1 = open("multiple_fd_tests/input_multiple_fd_1.txt", O_RDONLY);
	fd2 = open("multiple_fd_tests/input_multiple_fd_2.txt", O_RDONLY);
	fd3 = open("multiple_fd_tests/input_multiple_fd_3.txt", O_RDONLY);
	fd4 = open("multiple_fd_tests/input_multiple_fd_4.txt", O_RDONLY);
	printf("--------------------------\nMULTIPLE FILE TEST\n--------------------------\n");
	x = get_next_line(fd1, &line);
	if (ft_strcmp(line, "FILE 1 LINE 1") == 0)
		printf("FILE 1 CALL 1 OK \"%s\"\n", line);
	else
		printf("FAIL\n");
	ft_strdel(&line);

	x = get_next_line(fd2, &line);
	if (ft_strcmp(line, "FILE 2 LINE 1") == 0)
		printf("FILE 2 CALL 1 OK \"%s\"\n", line);
	else
		printf("FAIL\n");

	x = get_next_line(fd3, &line);
	if (ft_strcmp(line, "FILE 3 LINE 1") == 0)
		printf("FILE 3 CALL 1 OK \"%s\"\n", line);
	else
		printf("FAIL\n");

	x = get_next_line(fd1, &line);
	if (ft_strcmp(line, "FILE 1 LINE 2") == 0)
		printf("FILE 1 CALL 2 OK \"%s\"\n", line);
	else
		printf("FAIL\n");

	x = get_next_line(fd4, &line);
	if (ft_strcmp(line, "FILE 4 LINE 1") == 0)
		printf("FILE 4 CALL 1 OK \"%s\"\n", line);
	else
		printf("FAIL\n");

	x = get_next_line(fd1, &line);
	if (ft_strcmp(line, "FILE 1 LINE 3") == 0)
		printf("FILE 1 CALL 3 OK \"%s\"\n", line);
	else
		printf("FAIL\n");

	printf("--------------------------\nDONE\n");
	return (0);
}
