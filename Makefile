SUB_DIRS := $(shell find . -iname "[0-9][0-9]*" -type d)

.PHONY: all
all:
	for dir in $(SUB_DIRS); do \
		$(MAKE) -C $$dir; \
	done

.PHONY: clean
clean:
	for dir in $(SUB_DIRS); do \
		$(MAKE) -C $$dir clean; \
	done
