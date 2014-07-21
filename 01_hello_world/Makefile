CC := cc
CFLAGS = -Wall

PROG := hello
SRCS := hello_world.c
OBJS := $(SRCS:%.c=%.o)

CC_CMD := $(CC) -c $(CFLAGS)

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

$(OBJS): %.o: %.c
	$(CC_CMD) $< -o $@

.PHONY: run
run: $(PROG)
	echo "\nRunning ./"$(PROG)" ..."&& ./$(PROG)

.PHONY: clean
clean:
	rm $(PROG) $(OBJS)
