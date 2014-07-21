CC := cc
CFLAGS = -Wall

PROG := pointer_array
SRCS := $(PROG:=.c)
OBJS := $(SRCS:.c=.o)

CC_CMD := $(CC) -c $(CFLAGS)

.PHONY: all
all: $(PROG)

$(PROG): %: %.o
	$(CC) -o $(@) $(<)

$(OBJS): %.o: %.c
	$(CC_CMD) $(<) -o $(@)

.PHONY: run
run: $(PROG)
	@for prog in $(PROG); do \
		echo "\nRunning ./"$$prog" ..."; \
		./$$prog; \
	done

.PHONY: clean
clean:
	rm $(PROG) $(OBJS)
