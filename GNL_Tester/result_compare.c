#include <stdio.h>
#include "../libft/includes/libft.h"
#include <fcntl.h>

int		main(void)
{
	int		fd1;
	int		fd2;
	int		ret1;
	int		ret2;
	char	buf1[85855 + 1];
	char	buf2[85855 + 1];

	fd1 = open("result.log", O_RDONLY);
	fd2 = open("correct.log", O_RDONLY);
	ret1 = read(fd1, buf1, 85855);
	ret2 = read(fd2, buf2, 85855);
	buf1[ret1] = '\0';
	buf2[ret2] = '\0';
	if (ft_strcmp(buf1, buf2) != 0)
		{
			printf("FAIL!\n");
		}
	else 
		printf("SUCCESS!\n");
	return (0);
}