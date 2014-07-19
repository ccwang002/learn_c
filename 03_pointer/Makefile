CC := cc
CFLAGS = -Wall

PROG := play_pointer pointer_app
SRCS := $(addsuffix .c, $(PROG))
OBJS := $(SRCS:%.c=%.o)

CC_CMD := $(CC) -c $(CFLAGS)

.PHONY: all
all: $(PROG)

$(PROG): $(addsuffix .o, $(PROG))
	$(CC) -o $(@) $(@).o

$(OBJS): %.o: %.c
	$(CC_CMD) $(<) -o $(@)

.PHONY: run
run: $(PROG)
	# Running in make cannot accept stdin
	echo $(PROG) | xargs -n 1 -I prog sh -c "./prog"

.PHONY: clean
clean:
	rm $(PROG) $(OBJS)
