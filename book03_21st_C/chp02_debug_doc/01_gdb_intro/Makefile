P=stddev_bugged glist
CC=clang -std=gnu11
CFLAGS=-Wall -g `pkg-config --cflags glib-2.0`
LDLIBS=`pkg-config --libs glib-2.0` -lm

.PHONY: all
all : $(P)

$(P): %: %.o
	$(CC) $(CFLAGS) -o $(@) $(<) $(LDLIBS)

$(P:=.o): %.o: %.c
	$(CC) $(CFLAGS) -c $(<) -o $(@)

.PHONY: clean
clean:
	rm -f $(P) $(P:=.o)
	rm -rf $(P:=.dSYM)
