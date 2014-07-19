CC := cc
CFLAGS = -Wall

PROG := play_pointer pointer_app
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
