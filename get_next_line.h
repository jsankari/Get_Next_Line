/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsankari <jsankari@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:15:50 by jsankari          #+#    #+#             */
/*   Updated: 2020/07/31 15:40:21 by jsankari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 16
# define FD_SIZE 5000

# include "libft/includes/libft.h"
# include <unistd.h>

int		get_next_line(const int fd, char **line);

#endif
