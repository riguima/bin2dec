all:
	g++ -Wall -fsanitize=address -Werror -g -Wextra -pedantic -v -O2 main.cpp

install:
	cp ./a.out /usr/bin/bin2dec

clean:
	rm ./a.out
