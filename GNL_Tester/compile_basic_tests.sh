cd ..
make -C libft/ fclean && make -C libft/
cd GNL_Tester
clang -Wall -Wextra -Werror -I ..libft/includes -o ../get_next_line.o -c ../get_next_line.c
clang -Wall -Wextra -Werror -I ..libft/includes -o basic_tests.o -c basic_tests.c
clang -o test_gnl basic_tests.o ../get_next_line.o -I ../libft/includes -L ../libft/ -lft