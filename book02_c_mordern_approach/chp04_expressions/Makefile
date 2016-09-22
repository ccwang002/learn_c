PROGS=progproj_02
CFLAGS=-std=c11 -O -g -Wall -Wextra -pedantic  # `pkg-config --cflags glib-2.0`
# LDLIBS=`pkg-config --libs glib-2.0` -lm

.PHONY: all clean
all : $(PROGS)

$(PROGS): %: %.o

clean:
	rm -f $(PROGS) $(PROGS:=.o)
# 	rm -rf $(P:=.dSYM)
