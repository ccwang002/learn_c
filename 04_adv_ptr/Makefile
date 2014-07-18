CC := cc
CFLAGS = -Wall

PROG := pointer_array
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
	$(foreach pg, $(PROG), ./$(pg);)

.PHONY: clean
clean:
	rm $(PROG) $(OBJS)
