CC := clang
CFLAGS = -Wall -g -O3 --std=gnu11 -lm
CC_CMD := $(CC) $(CFLAGS)

PROG := erf

.PHONY: all
all: $(PROG)

$(PROG): %: %.c
	$(CC_CMD) $(<) -o $(@)

.PHONY: run
run: $(PROG)
	echo "\nRunning ./"$(PROG)" ..."&& ./$(PROG)

.PHONY: clean
clean: clean_dSYM
	rm $(PROG)

.PHONY: clean_dSYM
clean_dSYM:
	rm -r $(PROG:=.dSYM)
