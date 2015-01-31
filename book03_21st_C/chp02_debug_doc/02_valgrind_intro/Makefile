P=mem_trace
OBJECTS=
CFLAGS=-Wall -g -std=gnu11
LDLIBS=
CC=clang

$(P): %: %.o
	$(CC) $(CFLAGS) -o $(@) $(<) $(LDLIBS)
	dsymutil $(@)  # create .dSYM directory

$(P:=.o): %.o: %.c
	$(CC) $(CFLAGS) -c $(<)

.PHONY: clean
clean:
	rm -f $(P) $(P:=.o)
	rm -rf $(P:=.dSYM)
