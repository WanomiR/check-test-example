CC=GCC
CFLAGS=-Wall -Wextra -Werror -std=c11 -g -O0
CHECKFLAGS=-lcheck

test:
	$(CC) fizzbuzz.c tests/fizzbuzz_test.c tests/test.c $(CHECKFLAGS) $(CFLAGS) -o test_fizzbuzz
	./test_fizzbuzz
	rm -rf test_fizzbuzz

clang:
	clang-format -i *.c **/*.c *.h

clean:
	rm -rf **/*.o *.o
