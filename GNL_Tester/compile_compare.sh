cd ..
make -C libft/ fclean && make -C libft/
cd GNL_Tester
clang -Wall -Wextra -Werror -I libft/includes -o result_compare.o -c result_compare.c
clang -o test_compare result_compare.o -I libft/includes -L ../libft/ -lft