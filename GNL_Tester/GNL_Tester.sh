clear
> result.log
echo "Testing basic files."; bash compile_basic_tests.sh > /dev/null
./test_gnl >> result.log
echo "Testing multiple filedescriptors."; bash compile_multiple_fd_tests.sh > /dev/null
./test_gnl >> result.log
echo "Testing standard input."; bash compile_stdout_tests.sh > /dev/null
echo "1234" | ./test_gnl >> result.log
echo -n "1234" | ./test_gnl >> result.log
echo -e "1234\n4321" | ./test_gnl >> result.log
echo -en "1234\n4321" | ./test_gnl >> result.log
echo -e "1234\n4321\nabcd" | ./test_gnl >> result.log
echo -en "1234\n4321\nabcd" | ./test_gnl >> result.log

echo -e "12345678" | ./test_gnl >> result.log
echo -en "12345678" | ./test_gnl >> result.log
echo -e "12345678\n87654321" | ./test_gnl >> result.log
echo -en "12345678\n87654321" | ./test_gnl >> result.log
echo -e "12345678\n87654321\nabcdefgh" | ./test_gnl >> result.log
echo -en "12345678\n87654321\nabcdefgh" | ./test_gnl >> result.log

echo -en "12345678abcdefgh" | ./test_gnl >> result.log
echo -e "12345678abcdefgh" | ./test_gnl >> result.log
echo -en "12345678abcdefgh\nabcdefgh12345678" | ./test_gnl >> result.log
echo -e "12345678abcdefgh\nabcdefgh12345678" | ./test_gnl >> result.log

echo -en "12345678abcdefgh\nabcdefgh12345678\n87654321abcdefgh" | ./test_gnl >> result.log
echo -e "12345678abcdefgh\nabcdefgh12345678\n87654321abcdefgh" | ./test_gnl >> result.log
echo -en "1\n12\n123\n1234\n12345\n123456\n1234567\n12345678\n123456789\nabcdefghi\n987654321abc" | ./test_gnl >> result.log
echo -e "1\n12\n123\n1234\n12345\n123456\n1234567\n12345678\n123456789\nabcdefghi\n987654321abc" | ./test_gnl >> result.log

echo -en "1\n12\n123\n1234\n12345\n123456\n1234567\n12345678\n123456789\nabcdefghi\n987654321abc\n\n\n" | ./test_gnl >> result.log
echo -e "1\n12\n123\n1234\n12345\n123456\n1234567\n12345678\n123456789\nabcdefghi\n987654321abc\n\n\n" | ./test_gnl >> result.log

echo -en "" | ./test_gnl >> result.log
echo -e "" | ./test_gnl >> result.log

echo -en "\n" | ./test_gnl >> result.log
echo -e "\n" | ./test_gnl >> result.log

echo -en "\n\n\n\n" | ./test_gnl >> result.log
echo -e "\n\n\n\n" | ./test_gnl >> result.log
echo "Comparing result with correct results."; bash compile_compare.sh > /dev/null
./test_compare
echo "Compiling test main."; bash compile_file_tests.sh > /dev/null

echo -e "All tests done. See \"result.log\"."
