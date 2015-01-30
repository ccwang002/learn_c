CC := clang
CFLAGS = -Wall -g -O3 --std=gnu11
CC_CMD := $(CC) $(CFLAGS)
LIBS := -lm

PROG := erf

.PHONY: all
all: $(PROG)

$(PROG): %: %.o
	$(CC_CMD) -o $(@) $(<) $(LIBS)

$(PROG:=.o): %.o: %.c
	$(CC_CMD) -c $(<) -o $(@)

.PHONY: run
run: $(PROG)
	echo "\nRunning ./"$(PROG)" ..."&& ./$(PROG)

.PHONY: clean
clean:
	rm $(PROG) $(PROG:=.o)
