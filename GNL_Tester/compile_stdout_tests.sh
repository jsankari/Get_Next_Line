cd ..
make -C libft/ fclean && make -C libft/
cd GNL_Tester
clang -Wall -Wextra -Werror -I libft/includes -o ../get_next_line.o -c ../get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o test_stdin_main.o -c test_stdin_main.c
clang -o test_gnl test_stdin_main.o ../get_next_line.o -I libft/includes -L ../libft/ -lft