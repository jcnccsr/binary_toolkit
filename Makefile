all:
	cc main.c -fsanitize=address,undefined -Wall -Wextra -Werror -Wpedantic

clean:
	rm -f a.out
