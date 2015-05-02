P=hello ten_pi error_print item_seven ratio_s sizeof
CFLAGS=-Wall -Wextra -Wpedantic -Wformat=2 -Wcast-qual -std=gnu11
CC=clang

$(P): %: %.o

.PHONY: clean all
all: $(P)
clean:
	rm -f $(P) $(P:=.o)
	rm -rf $(P:=.dSYM)
