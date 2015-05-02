P=hello
CFLAGS=-Wall -Wextra -Wpedantic -Wformat=2 -Wcast-qual -std=gnu11
CC=clang

$(P): $(P:=.o)

.PHONY: clean
clean:
	rm -f $(P) $(P:=.o)
	rm -rf $(P:=.dSYM)
